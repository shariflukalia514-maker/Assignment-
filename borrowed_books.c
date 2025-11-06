/*
Name: Shariff Lukalia
Reg No: PA106/G/28761/25
Description: Program to record book titles borrowed each day
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char title[100];

    // Open the file and ensure data stored is not deleted 
    file = fopen("borrowed_books.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter the title of the borrowed book: ");
    fgets(title, sizeof(title), stdin); // Read book title of the book

    // Write the title to the file
    fprintf(file, "%s", title);

    fclose(file);// closing the file

    printf("Book title successfully stored in borrowed_books.txt\n");

    return 0;
}
