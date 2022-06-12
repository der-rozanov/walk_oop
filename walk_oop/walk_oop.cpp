#include <iostream>
#include <thread>
#include <string>
#include <vector>
#include <windows.h>
#include "Header.h"

int main()
{
	Display D;
	Keypad Keypad(w,s,a,d);
	Point p(0,0,'X');

	while (true)
	{
		//p.move(Keypad.getMoveVector());
		std::cout << "1337";
		//D.draw(p.getPosition(), p.getSymbol());
		//Sleep(100);
		//D.clear();
		//Работай
		std::cout << "git_works!";
		std::cout << "Hi, GEY";
	}
	
	return 0;
}