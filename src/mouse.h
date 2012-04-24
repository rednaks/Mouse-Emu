#ifndef MOUSE_H
#define MOUSE_H
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <unistd.h>
#include <fcntl.h>
#include <linux/input.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <string>


using namespace std;
typedef struct input_event INPUT_EVENT;

class Mouse{
// Les attributs :
private:
	INPUT_EVENT event;
	INPUT_EVENT event_end;
	string mouse_location;
	int fd;
	
// Les constructeurs et destructeurs :
public:
	Mouse(char *);
	~Mouse();

//Les methodes :
public:
	void up();
	void down();
	void left();
	void right();
	void UpRight();
	void UpLeft();
	void DownRight();
	void DownLeft();
	void move();


};
#endif
