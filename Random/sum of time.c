#include<stdio.h>
struct time{
	int hours;
	int min;
	int sec;
	
	
};
int main(void)
{
	struct time t1,t2;
	
	printf("Enter the time in (HOURS:MIN:SEC)\n");
	scanf("%d %d %d",&t1.hours,&t1.min,&t1.sec);
    
	printf("Enter the time in (HOURS:MIN:SEC)\n");
	scanf("%d %d %d",&t2.hours,&t2.min,&t2.sec);
	 
	 int second=t1.sec+t2.sec;
	 int minutes=t1.min+t2.min;
	 int hours=t1.hours+t2.hours;
	
	 if(second>60)
	 {  
	   int a=(t1.sec+t2.sec)%10;
	 	second=10+a;
	 	minutes+=1;
	 }
	 
	 if(minutes>60)
	 {  minutes=minutes%60;
	 	hours++;
	 }
	 if(hours>24)
	 {
	 	hours%=24;
	 }
	  printf("%d %d %d",hours,minutes,second);
	
}
