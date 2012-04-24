CC=g++
OBJ=obj


mv_mouse: mouse.o
	$(CC) main.cpp $(OBJ)/mouse.o -o mouse_emu

mouse.o: mouse.cpp mouse.h
	mkdir -p $(OBJ)
	$(CC) -c mouse.cpp -o $(OBJ)/mouse.o


clean:
	rm -r $(OBJ)
