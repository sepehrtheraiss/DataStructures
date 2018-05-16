FLAG = -std=c99 -Wall -ggdb
SRC = src/BTree.c
OBJ = obj/BTree.o obj/test.o
EXE = Test
MEMCHECK = valgrind --leak-check=full --track-origins=yes

all: $(EXE)

Test: obj/test.o obj/BTree.o
	gcc -o Test obj/test.o obj/BTree.o $(FLAG)

obj/test.o: src/test.c include/BTree.h
	gcc -c src/test.c -o obj/test.o

obj/BTree.o: src/BTree.c include/BTree.h
	gcc -c src/BTree.c -o obj/BTree.o

checkTest: Test
	$(MEMCHECK) Test
	
clean:
	rm -f $(OBJ) $(EXE) Test
