cc = gcc
# run = mpirun

all: 
	$(cc)  -Wall test.cc -o mpOut -lm
	./mpOut
	python3 hello.py

clean:
	# rm -f ./mpOut


`