/*
name:Shariff lukalia 
reg no :PA106/G/28761/25
Description:Program displaying simple.interest rate
*/



#include<stdio.h>
int main(){
  float principle, rate, time, interest;
  
   printf("\nEnter Principle amount: ");
   scanf("%f", &principle);
   
   printf("\n Enter the rate ");
   scanf("%f", &rate);
   
   printf("\n Enter time: ");
   scanf("%f", &time);
   
   interest = principle * rate/100 * time;
   printf("\n the simple interest is ksh, %.2f,",interest);
    return 0;
    }
   
   
   
   