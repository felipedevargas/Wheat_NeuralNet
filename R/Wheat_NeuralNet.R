.onLoad <- function(lib, pkg) { 
  Wheat_NeuralNetLib<<-lib
	Wheat_NeuralNetPkg<<-pkg
	invisible(Wheat_NeuralNetLib)
	invisible(Wheat_NeuralNetPkg)
  cat("\nWheat_NeuralNet loaded...\n")
  cat("Using runNeural(network,DAMF,Tx_20d, Tn_20d,P_20d,Tx_10d,Tn_10d,P_10d,
                     Tx_5d,Tn_5d,P_5d)")
}

runNeural<- function(network,DAMF,Tx_20d, Tn_20d,P_20d,Tx_10d,Tn_10d,P_10d,
                     Tx_5d,Tn_5d,P_5d){
  if (missing(network) || missing(DAMF)|| missing(Tx_20d) || missing(Tn_20d)
      || missing(P_20d) || missing(Tx_10d) || missing(Tn_10d) || missing(P_10d)
      || missing(Tx_5d) ||missing(Tn_5d) || missing(P_5d))
    stop("Missing Arguments")
  result = 1.1
  wd <-getwd()
  libs = "libs"
  setwd(paste(Wheat_NeuralNetLib,Wheat_NeuralNetPkg,libs,sep = "/"))
  library.dynam("Wheat_NeuralNet",Wheat_NeuralNetPkg,Wheat_NeuralNetLib)
  result <- .C("neural",PACKAGE = "Wheat_NeuralNet",network=as.integer(network) , 
               DAMF=as.double(DAMF) , Tx_20d=as.double(Tx_20d) ,  
               Tn_20d=as.double(Tn_20d) ,P_20d=as.double(P_20d) ,
               Tx_10d=as.double(Tx_10d) , Tn_10d=as.double(Tn_10d) , 
               P_10d=as.double(P_10d) ,Tx_5d=as.double(Tx_5d) , 
               Tn_5d=as.double(Tn_5d) , P_5d=as.double(P_5d) ,
               result = as.double(result))
  setwd(wd)
  return(result$result)
}
