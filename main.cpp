#include <iostream>
#include <vector>
#include <fstream>
//#include "Node.h"
#include "LinkedList.h"

class Digit
{
private:
	int _digit;

public:
	Digit() : _digit(0) {}
	Digit(int digit) : _digit(digit) {}

	int operator+(Digit& digit)
	{
		return digit._digit + _digit;
	}

	int operator-(Digit& digit)
	{
		return  _digit - digit._digit;
	}

	
	int GetDigit()
	{
		return _digit;
	}

};




int main()
{
	/*Digit d1(1);
	Digit d2(2);
	std::cout << d1.GetDigit() << std::endl;
	std::cout << d1 + d2 << std::endl;
	std::cout << d1 - d2 << std::endl;*/

	
	LinkedList list;
	for (int i = 0; i < 5; i++)
	{
		list.Push_back(i);
	}
	list.ShowList();
	
	std::cout << '\n' << list.SearchByIndex(3)->GetData() << std::endl;

	list.PushByIndex(234, 3);
	list.ShowList();

	return 0;
}