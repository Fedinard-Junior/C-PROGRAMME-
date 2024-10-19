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
	strcpy(structurebook.title,"introduction to c programming");
	strcpy(structurebook.author,"John Smith");
	structurebook.publication_year=2022;
	structurebook.ISBN=9780131103627;
	structurebook.price=49.99;
	
//print the output
printf("title:%s\n",structurebook.title);
printf("author:%s\n",structurebook.author);
printf("ISBN:%d\n",structurebook.ISBN);
printf("price:%d\n",structurebook.price);
printf("publication_year:%d",structurebook.publication_year);
return 0;
}	