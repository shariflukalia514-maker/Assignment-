/*
Name :Shariff lukalia
Reg no ;PA106/G/28761/25
Descrption:Program to calcuate fare

*/
#include<stdio.h>
//Function declaration
float calculatefare(float distance );
int main(){
	float distance , fare;
	//prompting user to enter number of kilometers travelled
	printf("Enter the distance travelled( in kilometers):");
	scanf("%f",&distance);
	//Function call
	fare=calculatefare(distance);
	//output results on amount of fare to pay 
	printf("total fare=Ksh%.2f\t",fare);
	return 0;	
	
}
//Function definition
float calculatefare(float distance ){
	float rate=50.0;//ksh 50 per kilometer
	float totalfare;
	totalfare=distance*rate;
	return totalfare;
		
}