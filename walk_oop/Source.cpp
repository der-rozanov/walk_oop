#include<iostream>
#include<vector>
#include "Header.h"

std::vector <int> Point::getPosition()
{
		return position;
}

void Point::move(std::vector <int> moveVector)
{
	position[0] += moveVector[0];
	position[1] += moveVector[1];

	if (position[0] > 40) position[0] = 39;
	if (position[1] > 80) position[1] = 79;
	if (position[0] < 0) position[0] = 0;
	if (position[1] < 0) position[1] = 0;
}

char Point::getSymbol()
{
	return symbol;
}

void Display::draw(std::vector<int> position, char symbol)
{
	for (size_t i = 0; i < position[1]; i++)
	{
		std::cout << std::endl;
	}
	for (size_t i = 0; i < position[0]; i++)
	{
		std::cout << "  ";
	}
	std::cout << symbol;
};

void Display::clear()
{
	system("cls");
};

void Keypad::findKey()
{
	if (GetKeyState(left) & 0x8000) vect = { -1,0 };
	else if (GetKeyState(right) & 0x8000) vect = { 1,0 };
	else if (GetKeyState(up) & 0x8000) vect = { 0,-1 };
	else if (GetKeyState(down) & 0x8000) vect = { 0,1 };
	else vect = { 0,0 };
};

std::vector<int> Keypad::getMoveVector()
{
	findKey();
	return vect;
}