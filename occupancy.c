/*
Name: Shariff Lukalia
Reg No: PA106/G/28761/25
Description: Program to monitor hotel room occupancy and revenue
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	//declaring variables
    int occupancy[5][10]; // 5 floors, 10 rooms per floor
    int floor, room;
    int occupied, vacant;

    // Seed random number generator
    srand(time(0));

    // Generate random occupancy data (1 = occupied, 0 = vacant)
    for (floor = 0; floor < 5; floor++) {
        for (room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2; // Randomly 0 or 1
        }
    }

    // Display occupancy status and count per floor
    printf("HOTEL OCCUPANCY REPORT\n");
    

    for (floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;

        printf("Floor %d: ", floor + 1);

        for (room = 0; room < 10; room++) {
            printf("%d ", occupancy[floor][room]);
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("\nOccupied: %d\tVacant: %d\n", occupied, vacant);
        
    }

    return 0;
}
