/*
Name:Shariff lukalia
Reg no :PA106/28761/25
Date:30/09/2025
Description:program to calculate water bill
 */

#include<stdio.h>//preprocessor directive

//main function 
int main(){
    //variable declaration 
    float bill;
    int units;
    
    
    //prompt the user to enter  number of water units consumed
    printf("Enter number of water units consumed:\t");
    scanf("%d",&units);
    //calculating water bill
    if(units<=30){
    bill=units*30;
    }
    else if(units>=31&&units<=60){
    bill =units*25;
    }
    else{
    bill=units*30;
    
    }
    printf("Total water bills:%.2fKES\t",bill);
    return 0;
}
    
    
   
    
    
    















    