//cpp
#include<iostream>

void dynamic_array() 
{
	const int SIZE = 10;
	char* name = new char[SIZE];//ALLOCATES
	std::cout << "Enter name: ";
	std::cin.getline(name, SIZE);//CAPTURES from keyboard

	std::cout << name << "\n";

	delete[] name;
}