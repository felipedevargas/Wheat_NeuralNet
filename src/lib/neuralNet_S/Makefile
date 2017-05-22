CC=gcc
CFLAGS=-Wall -fPIC
LFLAGS=-lm

ODIR=./obj
_OBJ=neuralNet_S_initialize.o neuralNet_S_terminate.o neuralNet_S.o \
neuralNet_S.o rt_nonfinite.o rtGetInf.o rtGetNaN.o
OBJ=$(patsubst %,$(ODIR)/%,$(_OBJ))

SO=../libneuralNet_S.so

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

all: $(OBJ)
	$(CC) -shared -o $(SO) $^ $(CFLAGS) $(LFLAGS)

clean:
	rm -f $(ODIR)/*.o $(SO)
