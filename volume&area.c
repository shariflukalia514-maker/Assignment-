//program displaying surface area and volume 
/*
Name:Shariff lukalia
Reg no.PA106/G/28761/25
Description :Program displaying surface area and volume 
*/
#include<stdio.h>
//main function 
int main(){
    float radius ,height, area,volume;
    double pi=3.14159;
    printf("Enter radius:\n");
    scanf("%f",&radius);
    
    printf("Enter height:\n");
    scanf("%f",&height);
    
   area=2*pi*radius*radius +2*pi*radius*height;
    volume=pi*radius*radius*height;
    printf("The  area is %.2f",area);
    printf("The volume is%.2f,volume");
    
    return 0;
}    
    










