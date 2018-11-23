CFLAGS = -Wall -g #Compiler options: all warnings and debug info

# Defines the runnable program name ./main
PROG = main

# Defines all the modules
SOURCES = main.c bibfunc.c

# Defines how to trasnform a .c into a .o
OBJECTS = $(SOURCES: .c = .o)

$(PROG): $(OBJECTS)
	gcc $(CFLAGS) $(OBJECTS) -o $@

# Allows to clean the .0 and the generated runnable program
clean:
	-@ rm -f $(OBJECTS) $(PROG)

depend:
	makedepend -- $(CFLAGS) -- $(SOURCES)

# DO NOT DELETE
main.o: bibfunc.h
bibfunc.o: bibfunc.h

# all: main

# To produce the main module, from these files,
# main.o and bibfunc.o, execute the following command:
# gcc -o main main.c bibfunc.c
# main: main.o bibfunc.o
# 	gcc -o main main.c bibfunc.c

# To produce the main.o file, from the main.c file
# execute the following command: 
# gcc-c main.c
# main.o: main.c
# 	gcc -c main.c

# bibfunc.o: bibfunc.c
# 	gcc -c bibfunc.c