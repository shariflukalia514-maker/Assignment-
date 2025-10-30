/*
Name: Shariff Lukalia
Reg No: PA106/G/28761/25
Description: Program to monitor room occupancy across 3 hotel branches
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	// declaring variables 
    int chain[3][5][10]; // 3 branches, 5 floors, 10 rooms per floor
    int branch, floor, room;
    int totalOccupied = 0;

    // Seed random number generator
    srand(time(0));

    // Assign random occupancy data (1 = occupied, 0 = vacant)
    for (branch = 0; branch < 3; branch++) {
        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2; // 0 or 1
            }
        }
    }

    // Display occupancy per branch and calculate total occupied rooms
    printf("HOTEL CHAIN OCCUPANCY REPORT\n");
   

    for (branch = 0; branch < 3; branch++) {
        int branchOccupied = 0;
        printf("Branch %d:\n", branch + 1);
       

        for (floor = 0; floor < 5; floor++) {
            int floorOccupied = 0;
            printf("Floor %d: ", floor + 1);
            for (room = 0; room < 10; room++) {
                printf("%d ", chain[branch][floor][room]);
                if (chain[branch][floor][room] == 1) {
                    floorOccupied++;
                }
            }
            printf(" | Occupied: %d\n", floorOccupied);
            branchOccupied += floorOccupied;
        }

        printf("Total Occupied in Branch %d: %d rooms\n\n", branch + 1, branchOccupied);
        totalOccupied += branchOccupied;
    }

   
    printf("TOTAL OCCUPIED ROOMS ACROSS ALL BRANCHES: %d\n", totalOccupied);
    

    return 0;
}
