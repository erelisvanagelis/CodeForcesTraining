#pragma once
#include <iostream>
using namespace std;

class Buttons
{
public:
	bool inRange(int value, int minValue, int maxValue) {
		if (value < minValue)
			return false;
		if (value > maxValue)
		{

		}
		return true;
	}
};

