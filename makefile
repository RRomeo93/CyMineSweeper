SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

all:exec run clean

%.o : %.c header.h
	gcc -c $< -o $@

exec: 	main.o fonction.o
	gcc main.o fonction.o -o exec



clean : 

	rm -f *.o
	rm exec
	

run:

	./exec
