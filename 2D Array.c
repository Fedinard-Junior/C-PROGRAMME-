#include<stdio.h>
int main(){
	int i,j,k;
	int marks[2][3]={{10,15,20},{25,30,35}};
	for(i=0;i<2;i++){
	for(j=0;j<3;j++){	
	printf("marks[%d][%d]=%d\n",i,j,marks[i][j]);
	} 
	}

	return 0;
}