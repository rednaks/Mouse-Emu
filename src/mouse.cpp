#include "mouse.h"

Mouse::Mouse(char *fname)
{
	fd = open(fname,O_RDWR);
	cout << fd << endl;
	if(!fd || fd == -1){
		cout << "Error while accessing the mouse " << endl;
		exit(-1);
	}
	memset(&event, 0, sizeof(event));
	memset(&event, 0, sizeof(event_end));
	event_end.type = EV_SYN;
	event_end.code = SYN_REPORT;
	event_end.value = 0;
}


Mouse::~Mouse()
{
//	delete event;
//	delete event_end;
}

void Mouse::up(){

	event.type = EV_REL;
	event.code = REL_Y;
	event.value = -10;
	move();
		
}

void Mouse::down(){
	
	event.type = EV_REL;
    event.code = REL_Y;
    event.value = 10;
	move();
}

void Mouse::right(){

	event.type = EV_REL;
    event.code = REL_X;
    event.value = 10;
	move();
}

void Mouse::left(){

	event.type = EV_REL;
    event.code = REL_X;
    event.value = -10;
	move();
}

void Mouse::UpRight(){

	this->up();
	this->right();
}

void Mouse::UpLeft(){

	this->up();
	this->left();
}

void Mouse::DownRight(){
	this->down();
	this->right();
}

void Mouse::DownLeft(){

	this->down();
	this->left();
}

void Mouse::move(){

	write(fd, &event, sizeof(event));
	write(fd, &event_end, sizeof(event_end));
}

