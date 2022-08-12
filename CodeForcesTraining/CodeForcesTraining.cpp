// CodeForcesTraining.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

bool inRange(int value, int minValue, int maxValue) {
	if (value < minValue)
		return false;
	if (value > maxValue)
		return false;

	return true;
}

int Buttons(int buttonCount) {
	int combCount = 0;
	for (int i = 0; i < buttonCount; i++)
	{
		for (size_t j = i; j < buttonCount; j++)
		{
			if (j == buttonCount - 1)
				combCount++;
			else
				combCount += i + 1;
		}
	}

	return combCount;
}


int main()
{
	int buttonCount = 0;
	cout << "Enter number of buttons\n";
	cin >> buttonCount;

	if (inRange(buttonCount, 1, 2000))
	{
		cout << Buttons(buttonCount) << endl;
	}
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
