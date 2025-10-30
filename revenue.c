/*
Name: Shariff Lukalia
Reg No: PA106/G/28761/25
Description: Program to calculate total and average weekly hotel revenue
*/

#include <stdio.h>

int main() {
    float revenue[7];   // 1D array to store daily revenues
    float total = 0.0, average;
    int i;

    //prompting user to  Input revenue for each day
    printf("Enter the revenue for each day of the week:\n");
    for(i = 0; i < 7; i++) {
        printf("Day %d revenue: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];  
    }

    // Calculate average daily revenue
    average = total / 7;

    // Display  output results
    
    for(i = 0; i < 7; i++) {
        printf("Day %d: Ksh %.2f\n", i + 1, revenue[i]);
    }
    printf("Total Weekly Revenue: Ksh %.2f\n", total);
    printf("Average Daily Revenue: Ksh %.2f\n", average);

    return 0;
}
