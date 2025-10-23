/*
Name: Shariff Lukalia
Reg no: PA 106/G/28761/25
Description: Program to convert temperature from Fahrenheit to Celsius
*/
#include <stdio.h>
// Function declaration
float convertTocelsius(float fahrenheit);

int main() {
    float fahrenheit, celsius;
    // Prompting user
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    // Function call
    celsius = convertTocelsius(fahrenheit);
    // Output final temperature
    printf("Temperature in Celsius: %.2f degrees Celsius\n", celsius);
    return 0;
}

// Function definition
float convertTocelsius(float fahrenheit) {
    float celsius;
    // Formula: C = (F - 32) * 5 / 9
    celsius = (fahrenheit - 32) * 5 / 9; // Added semicolon here
    return celsius;
}
