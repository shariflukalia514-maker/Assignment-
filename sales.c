/*
Name: Shariff Lukalia
Reg No: PA106/G/28761/25
Description: Program to record daily sales transactions and store them in sales.txt
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    float amount;
    char choice;

    
    file = fopen("sales.txt", "a");
    if (file == NULL) {
        printf("Error: Could not open or create sales.txt file.\n");
        return 1;
    }

    

    do {
        printf("Enter sale amount (Ksh): ");
        scanf("%f", &amount);

        // Write the amount to the file
        fprintf(file, "%.2f\n", amount);

        printf("Sale recorded successfully!\n");
        printf("Do you want to add another sale? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    
    fclose(file);

    printf("\nAll sales have been saved in sales.txt\n");

    return 0;
}
