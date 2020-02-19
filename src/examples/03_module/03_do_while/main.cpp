#include "do_while.h"
#include<iostream>
#include<string>
#include<ctype.h>

using std::cin;

bool is_valid_cin(std::istream& cin) 
{
	if (!cin) 
	{
		cin.clear();
		cin.ignore(100, '\n');
		return false;
	}

	return true;
}

bool is_alpha_string(std::string& str) 
{
	for (auto s : str) 
	{
		if (isdigit(s)) 
		{
			return false;
		}
	}

	return true;
}

int main() 
{	
	//prompt_user();
	std::string name;
	
	double num;
	do 
	{
		//std::cout << "Enter name: ";
		//std::cin >> name;
		std::cout << "Enter num: ";
		std::cin >> num;

	} while (!is_valid_cin(cin));
	// while (!is_alpha_string(name));
	
	return 0;
}