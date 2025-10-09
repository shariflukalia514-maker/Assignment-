/* 
Name:Shariff lukalia
Reg no:PA106/G/28761/25
Date:06/10/2025
Description :Program displaying ATM withdrawal 

*/
#include<stdio.h>//preprocessor directive 
// main function 
int main(){
    int amount;
    int balance=500;//start
    printf("Your current balance is %d\n",balance);
    while(balance>0)//stop
        {
        printf("Enter amount to withdaraw\n");
        scanf("%d",&amount);
        balance-=amount;
        printf("New balance =%d\n", balance);
        
        }
    
    printf("insufficient balance");
    

return 0;

}