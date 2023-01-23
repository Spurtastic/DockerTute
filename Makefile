cc = gcc
# run = mpirun

all: 
	$(cc)  -Wall test.cc -o mpOut -lm
	./mpOut

clean:
	rm -f ./mpOut


