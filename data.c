/*
Name:Shariff Lukalia 
Reg no :PA106/G/28761/25
Date:30/09/2025
Description Program displaying data.deals
*/
#include<stdio.h>// preprocessor directive 
// main function 
int main() {
    int choice;
    
    // Displaying the menu of data.deals
    printf("Select data bundle:\n");
    printf("1. 100MB @ 50 KES\n");
    printf("2. 500MB @ 200 KES\n");
    printf("3. 1GB @ 350 KES\n");
    printf("4. 2GB @ 600 KES\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    
    //  switch statement to display data bundles deals and cost
    switch (choice) {
        case 1:
            printf("Bundle: 100MB, Cost = 50 KES\n");
            break;
        case 2:
            printf("Bundle: 500MB, Cost = 200 KES\n");
            break;
        case 3:
            printf("Bundle: 1GB, Cost = 350 KES\n");
            break;
        case 4:
            printf("Bundle: 2GB, Cost = 600 KES\n");
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
    
    return 0;
}