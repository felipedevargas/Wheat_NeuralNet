CC=gcc
CFLAGS=-Wall -fPIC
LFLAGS=-lm

ODIR=./obj
_OBJ=neuralNet_MS_initialize.o neuralNet_MS_terminate.o neuralNet_MS.o \
neuralNet_MS.o rt_nonfinite.o rtGetInf.o rtGetNaN.o
OBJ=$(patsubst %,$(ODIR)/%,$(_OBJ))

SO=../libneuralNet_MS.so

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

all: $(OBJ)
	$(CC) -shared -o $(SO) $^ $(CFLAGS) $(LFLAGS)

clean:
	rm -f $(ODIR)/*.o $(SO)
