// A simple program to accept users name and print it backward.
// Use string.size();

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	cout << "Enter your name: ";
	getline(cin, name);
	cout << "\nYour name spelled backward is: ";
	//use name.size to get the length of the string. Then minus -1 
	//because last index is always 1 less than length
	int length = name.size() - 1; 
	
	for (int i = length; i > -1; i--) {
		cout << name[i];
	}
    return 0;
}

