#include "mouse.h"


void wait_me(int ms)
{
	usleep(ms * 1000);
}

int main(int argc, char **argv)
{

	Mouse m(argv[1]);
	cout << "moving up ..." << endl;
	for(int i=0; i<50;i++)
	{
		m.up();
		wait_me(50);
	}

	cout << "moving down ..." << endl;
	for(int i=0; i<50;i++){
		m.down();
		wait_me(50);
	}

	cout << "moving left ..." << endl;
	for(int i=0;i<50;i++){
		m.left();
		wait_me(50);
	}
	
	cout << "moving right ..." << endl;
	for(int i=0;i<50;i++){
		m.right();
		wait_me(50);
	}
	
	cout << "moving up&right ..." << endl;

	for(int i=0;i<50;i++){
		m.UpRight();
		wait_me(50);
	}

	for(int i=0;i<50;i++){
		
		m.right();
		wait_me(25);
		m.UpRight();
		wait_me(25);
		m.up();
		wait_me(25);
		m.UpLeft();
		wait_me(25);
		m.left();
		wait_me(25);
		m.DownLeft();
		wait_me(25);
		m.down();
		wait_me(25);
		m.DownRight();
		wait_me(25);
}
	return 0;
}
