// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <cmath>
#include <list>
#include <map>
#include <unordered_map>
using namespace std;

// Recursive function to calculate factorial
#include <iostream>
using namespace std;
void toh(int, char, char, char);
int main() {
	char s = 'A';
	char t = 'B';
	char d = 'C';
	toh(3, s, t, d);
	return 0;
}
void toh(int n, char src, char temp, char dest)
// src to temp. src to dest, temp to dest
{
	if (n == 1)
	{
		cout << "\nn = " << n << " " << src << " --> " << dest;
		return;
	}
	toh(n - 1, src, dest, temp);
	// src to dest, src to temp, dest to temp
	cout << "\n";
	toh(1, src, temp, dest);
	cout << "\n";
	toh(n - 1, temp, src, dest);
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
