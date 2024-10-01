//program to calculate simpleinterest
#include<stdio.h>
int main(){
    float principle;//%f
    float rate;//%f
	int time;//%d
	float simpleinterest;
//calculate simpleinterest
simpleinterest=(principle*rate*time)/100;
//display results
printf("The interest is:%.2f",simpleinterest);
return 0;
}	