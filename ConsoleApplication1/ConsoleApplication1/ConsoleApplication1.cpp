// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <cmath>
#include <list>
#include <map>
#include <set>
#include <unordered_map>
using namespace std;
//Write a program that will prompt the user to enter a #. 
// Create and Call a Recursive Function that will add all numbers from 1 to # 
// (Function should call itself until # or 1 is reached)

int sum(int x) {
	if (x == 1) {
		return 1;
	}
	else {
		return x + sum(x - 1);
	}
}
int main()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;

	cout << "The sum of numbers from 1 to " << num << " is: " << sum(num) << endl;

    return 0;

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
