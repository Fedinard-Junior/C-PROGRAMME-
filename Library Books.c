//program to calulate the fine for overdue library books
#include<stdio.h>
int main(){
	int bookid;
	int duedate,returndate;
	int daysoverdue;
	int fineamount;
	int finerate;
	
//calculate daysoverdue
daysoverdue=returndate-duedate;


//calculate fine rate
if (daysoverdue>=7){
	printf("finerate=20");//Ksh.20 per day
}else if(daysoverdue>=14){
	printf("finerate=50");//Ksh.50 per day
}else{
 finerate=100;//Ksh.100 per day
} 
//calculate fineamount
if (daysoverdue>0){fineamount=finerate*daysoverdue;
}
printf("bookid:%d\n",bookid);
printf("duedate:%d\n",duedate);
printf("returndate:%d\n",returndate);
printf("daysoverdue:%d\n",daysoverdue);
printf("finerate per day:Ksh.%d\n",finerate);
printf("fineamount:Ksh.%d");

return 0;
}
