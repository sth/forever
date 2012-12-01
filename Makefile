
build: all

all: forever

forever: forever.o

clean:
	rm -f forever *.o

