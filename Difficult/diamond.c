#include<stdio.h>
int j,k;
int i;
int rows;
int main(){
	printf("Enter the number of rows you want to print in diamond");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)//outter loop for printing rows
	{
		for (j=rows;j>i;j--)//loop for spacing
		{
			printf(" ");
		}
		for (k=1;k<=2*(i)-1;k++)//loop to print *
		{
			printf("*");
		}
		printf("\n");//new line
	}
	for (i=1;i<=rows;i++)//second outter loop for reversing the patter above
	{
		for(j=1;j<=i;j++)//for loop for spacing
		{
			printf(" ");
			
		}
		for (k=1;k<=2*(rows-i)-1;k++)//for loop for printing the pattern
		{
			printf("*");
		}
		printf("\n");//new line
	}
	
}
