/* Charae a/L Eh Sin B031820094
   Lab Week 6: Practicing looping. The task is a simple program with a menu
   to display user choice and calculate the monthly rate of the one selected by user.
*/

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	int choice, month;
	int adultPrice = 150, kidPrice = 20, seniorCitizenPrice = 0, total = 0;
	do {
		cout << setw(60) << "Please enter your choice: " << endl;
		cout << setw(46) << "1. Adult Gym" << endl;
		cout << setw(45) << "2. Kids Gym" << endl;
		cout << setw(55) << "3. Senior Citizen Gym" << endl;
		cout << setw(50) << "4. Exit the menu" << endl;
		cin >> choice;

		switch (choice) {
		case 1:
			cout << "Adult Gym: Price is RM " << adultPrice;
			break;
		case 2:
			cout << "Kids Gym: Price is RM " << kidPrice;
			break;
		case 3:
			cout << "Senior Citizen Gym: Price is Free"; //no need to print 0 as 0 might confused user
			break;
		case 4: 
			cout << "Exit menu!";
			break;
		default:
			cout << "Invalid choice!";
		}
		cout << endl;
		if (choice > 0 && choice < 4) {
			cout << "Enter how many months your want to use the gym: " << endl;
			cin >> month;
			if (month < 1) {
				cout << "Uh-oh month cannot be negative or zero.";
				break;
			}
			if (choice == 1) {
				total = month * adultPrice;
			}
			else if (choice == 2) {
				total = month * kidPrice;
			}
			else if (choice == 3) {
				total = month * seniorCitizenPrice;
			}
			cout << "The total price for " << month << " months is RM " << total << endl;
		}

	} while (choice != 4);
	
    return 0;
}

