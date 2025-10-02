/*
Name:Shariff lukalia
Reg no :PA106/28761/25
Date:30/09/2025
Description:program to check exam eligibility 
 */

#include<stdio.h>//preprocessor directive 

//main function 
int main(){
    //variable declaration 
    float attendance,average_marks;
    
    
    //prompt the user to enter attendance percentage 
    printf("Enter attendance percentage:\t");
    scanf("%f",&attendance);
    
    //prompt user to enter average marks
    printf("Enter average marks:\t");
    scanf("%f",&average_marks);
    
    //checking eligibility 
    if(attendance>=75 &&average_marks>=40){
    printf("Eligible.");
    }
    else{
    
    printf("Not eligible.");
    }
    
    
      return 0;
}
    
    
   
    
    
    















