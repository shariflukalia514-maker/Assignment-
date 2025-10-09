/*
Name:Shariff lukalia
Reg no:PA106/G/28761/25
Date:06/10/2025
Description :Program displaying password accesibility
*/

#include<stdio.h>
#include <string.h>

int main() {
    char password[4];
  
    char correctPassword[] = "1234";
    
    // prompting user to enter pqssword
    do {
        printf("Enter password: ");
        scanf("%s", password);
        
        // Check if the entered password is incorrect
        if (strcmp(password, correctPassword) != 0) {
            printf("Incorrect password. Try again.\n\n");
        }
        
    } while (strcmp(password, correctPassword) != 0);
    
    
    printf("Access Granted\n");
    
    return 0;
}