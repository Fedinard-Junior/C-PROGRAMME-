#include<stdio.h>
int main(){
	float principle;//%f
	float rate;//%f
	float time;//%f
	float compoundinterest;
	float amount;//%f

//calculate compoundinterest
amount=principle*pow((1+rate/100),time);
compoundinterest=amount-principle;

//display results
printf("The compoundinterest is:%.2f\n",compoundinterest);
return 0;
}

		
	
	