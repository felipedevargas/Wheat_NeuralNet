CC=gcc

IDIR=./include
LDIR=./lib

CFLAGS=-Wall -Wl,-rpath=$(LDIR) -fPIC
LFLAGS=-lneuralNet_MR -lneuralNet_MS -lneuralNet_S
SOFLAGS=-shared 

PATH_MR=$(LDIR)/neuralNet_MR
PATH_MS=$(LDIR)/neuralNet_MS
PATH_S=$(LDIR)/neuralNet_S

EXAMPLE=neural
SHARED=Wheat_NeuralNet.so

all:
	make -C $(PATH_MR)
	make -C $(PATH_MS)
	make -C $(PATH_S)
	$(CC) -C -I$(IDIR) -L$(LDIR) $(CFLAGS) $(SOFLAGS) $(EXAMPLE).c -o $(SHARED)  $(LFLAGS)

clean:
	make -C $(PATH_MR) clean
	make -C $(PATH_MS) clean
	make -C $(PATH_S) clean
	rm -f $(EXAMPLE)
