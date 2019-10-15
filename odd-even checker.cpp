// Charae a/L Eh Sin B031820094
//This simple program checks whether a number entered by user is even or odd number.

#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout << "Welcome to Odd-Even Checker" << endl;
	cout << "This program check whether a number is even or odd." << endl;
	string y;
	int num;
	do {
		cout << "Enter a number: ";
		cin >> num;
		if (num % 2) {
			cout << "Odd" << endl;
		}
		else {
			cout << "Even" << endl;
		}
		cout << "Do you wish to enter another number?" << endl;
		cout << "Press y if yes" << endl;
		cin >> y;
	} while (y == "Y" || y == "y");
	cout << "Exited Odd-Even Checker." << endl;
    return 0;
}

