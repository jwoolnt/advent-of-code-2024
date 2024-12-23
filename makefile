# Makefile to compile and run solutions for a given DAY, DAY, and INPUT

# Default target
all:
	run

# Compile the solution for DAY using clang++
compile:
	clang++ day$(DAY)/solution.cpp -o day$(DAY)/solution.exe

# Run the solution for DAY with DAY and INPUT
run:
	compile
	./day$(DAY)/solution.exe $(DAY) $(INPUT)

# Same as run but cleans executable afterwards
runc:
	run
	clean

# Clean the compiled binary
clean:
	rm -f day$(DAY)/solution.exe

# Clean all the compiled binaries
clean-all:
	rm -f day*/solution.exe
