#include<stdio.h>
int main(void)
{

int num;
int fact;
printf("Enter Number");
scanf("%d",&num);


for(int i = 2; i<num ; i++)
{
if(num%i==0)

printf("%d\n",i);

}



}
