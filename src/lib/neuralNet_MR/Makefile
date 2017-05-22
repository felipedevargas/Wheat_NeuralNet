CC=gcc
CFLAGS=-Wall -fPIC
LFLAGS=-lm

ODIR=./obj
_OBJ=neuralNet_MR_initialize.o neuralNet_MR_terminate.o neuralNet_MR.o \
neuralNet_MR.o rt_nonfinite.o rtGetInf.o rtGetNaN.o
OBJ=$(patsubst %,$(ODIR)/%,$(_OBJ))

SO=../libneuralNet_MR.so

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

all: $(OBJ)
	$(CC) -shared -o $(SO) $^ $(CFLAGS) $(LFLAGS)

clean:
	rm -f $(ODIR)/*.o $(SO)
