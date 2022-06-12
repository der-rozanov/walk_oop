#include <iostream>
#include <windows.h>
//
#define w 0x57
#define a 0x41
#define s 0x53
#define d 0x44

#pragma once
struct Point
{
	explicit Point(int x = 0, int y = 0, char symbol = '0') : position({x,y}), symbol(symbol) {};

	public:
		std::vector<int> getPosition();
		char getSymbol();
		void move(std::vector <int> moveVector);

	private:
		std::vector<int> position;
		char symbol;
};

struct Display
{
	explicit Display(int cols = 300, int lines = 400) : cols(cols), lines(lines) 
	{
		system("mode con cols=80 lines=40");
	};

	void draw(std::vector<int> position, char symbol);

	void clear();

	private:
		int cols;
		int lines;
};

struct Keypad
{
	Keypad(int up, int down, int left, int right) : up(up), down(down), left(left), right(right), vect({ 0,0 }) {};
	std::vector<int> getMoveVector();

	private:
		void findKey();
		std::vector<int> vect;
		int up, down, left, right;
};


