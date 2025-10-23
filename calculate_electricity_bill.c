/*
Name:Shariff lukalia
Reg no:PA106/G/28761/25
Description:program to  calculate electricity bill

*/
#include<stdio.h>
//function declaration
float CalculateElectricityBill(float units);

int main(){
	float units,bill;
	//prompting user to enter number of units
	printf ("Enter the number of units consumed :");
	scanf("%f",&units);
	//Function call
	bill=CalculateElectricityBill(units);
	//output results
	printf("total electricitybill:Ksh%.2f\t",bill);
	
	return 0;
			
}
//functon defintion
float CalculateElectricityBill(float units){
	float totalbill=0.0;
	if(units<=100){
		//first 100 units at Ksh 10 per units
		totalbill=units*10;
		
	}
	else if(units<=200){
		//first 100 units at Ksh10+next units at Ksh 15
		totalbill=(100*10) +((units-100)*15);
		
	}
	else{
	//first 100 units at Ksh 10 +next 100 units at Ksh 15 +above 200 units at ksh 20 
	totalbill=(100*10)+(100*15)	+((units-200)*20);
		
	}
	return totalbill;
		
}
