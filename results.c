/*
Name: Shariff Lukalia
Reg No: PA106/G/28761/25
Description: Program to read and display student names and marks from a binary file (results.dat)
*/

#include <stdio.h>
#include <stdlib.h>

// Define variables 
struct Student {
    char name[50];
    char regNo[20];
    float totalMarks;
};

int main() {
    FILE *file;
    struct Student s;

    //open binary file for reading 
    file = fopen("results.dat", "rb");
    if (file == NULL) {
        printf("Error: Unable to open results.dat file.\n");
        return 1;
    }

    

    // Read each student record and display the name and marks
    while (fread(&s, sizeof(struct Student), 1, file) == 1) {
        printf("students name: %s\n", s.name);
        printf("scores: %.2f\n", s.totalMarks);
       
    }

    // Close the file
    fclose(file);

    printf("All student records have been displayed successfully.\n");

    return 0;
}
