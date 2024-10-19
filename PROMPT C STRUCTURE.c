//c tructure to define name book
#include<stdio.h>
#include<string.h>
struct book{
char title[30];
	char author[30];
	int publication_year;
	int ISBN;
	float price;
}structurebook;
int main(){
	//declare a varriable of his structure
	printf("Enter title:");
	scanf("%s",&structurebook.title);
	printf("Enter author:");
	scanf("%s",&structurebook.author);
	printf("Enter publication_year:");
	scanf("%d",&structurebook.publication_year);
	printf("Enter ISBN:");
	scanf("%d",&structurebook.ISBN);
	printf("Enter price:");
	scanf("%d",&structurebook.price);
	
	
//print the output
printf("title:%s\n",structurebook.title);
printf("author:%s\n",structurebook.author);
printf("ISBN:%d\n",structurebook.ISBN);
printf("price:%.2f\n",structurebook.price);
printf("publication_year:%d",structurebook.publication_year);
return 0;
}	