CC=g++
OBJ=obj


mouse_emu:  mouse.o main.o
	$(CC) $(OBJ)/main.o $(OBJ)/mouse.o -o mouse_emu

mouse.o: mouse.cpp mouse.h
	mkdir -p $(OBJ)
	$(CC) -c mouse.cpp -o $(OBJ)/mouse.o
main.o: main.cpp
	mkdir -p $(OBJ)
	$(CC) -c main.cpp -o $(OBJ)/main.o

clean:
	rm -r $(OBJ)
