/*Charae a/L Eh Sin B031820094
  Exercise 5.3 Question 3
  Program that asks user how many floor the hotel has, how many rooms on each floor and how many of them are 
  occupied. Then display total room, total room occupied, total room unoccupied and the percentage of
  occupied room. 
*/

#include <iostream>
using namespace std;

int main() {
    int floor, totalRoom = 0, totalRoomOccupied = 0;

    cout << "How many floors do the hotel has?" << endl;
    cin >> floor;
    cout << endl; 
    for (int i = 0; i < floor; i++) {
        int rooms, roomsOccupied;
        cout << "Floor " << i+1 << endl;
        cout << "How many rooms in this floor? " << endl;
        cin >> rooms;
        cout << "How many of them are occupied? " << endl;
        cin >> roomsOccupied;
        totalRoom += rooms;
        totalRoomOccupied += roomsOccupied;
    }

    double percentage = static_cast<double>(totalRoomOccupied) / static_cast<double>(totalRoom) * 100;
    
    cout << "\n\nThe total number of rooms for this hotel are: " << totalRoom << endl;
    cout << "The number of occupied rooms are: " << totalRoomOccupied << endl;
    cout << "The number of unoccupied rooms are: " << totalRoom - totalRoomOccupied << endl;
    cout << "The percentage of rooms that are occupied: " << percentage << "%" << endl;

    return 0;
}
