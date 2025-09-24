/* Name:RABUT RE SHALOM
Registration number:PA106/G/29293/25
Assignement about a prompt to show name idnumber and bank balance*/
#include <stdio.h>

int main() {
    int age; 
    int Id_number;
    float bank_balance;
    
    printf("Enter your age: \n");
    scanf("%d",& age);  
    
    printf("Enter your ID number: \n");
    scanf("%d", &Id_number);  
    
    printf("Enter your bank balance: \n");
    scanf("%f", &bank_balance);  
    
    printf("Your age is %d\n", age);
    printf("Your ID number is %d\n", Id_number);
    printf("Your bank balance is %.2f\n",bank_balance);
    
    return 0;
    }
