#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int randomno()
{
	sleep(2);
	srand(time(NULL));
	return rand() % 6+1;
}
int main(void)
{
	printf("Welcome to Dice game!\n");
	
	char player1[25],player2[25];
	printf("player1,please enter your Name\n");
	fgets(player1,sizeof(player1),stdin);
	
	printf("player2,please enter your Name\n");
	fgets(player2,sizeof(player2),stdin);
	
	int arr1[3],arr2[3];
	int i;
	for(i=0;i<=2;i++)
	{
		arr1[i]=randomno();
		arr2[i]=randomno();
	}
	int sumarr1=0,sumarr2=0;
	
	printf("Rolling the Dice for %s...\n",player1);
	int j;
	for(j=0;j<=2;j++)
	{
		printf("Dice %d:%d\n",j+1,arr1[j]);
		sumarr1=sumarr1+arr1[j];
	}
	
	printf("Rolling the Dice for %s...\n",player2);
	int k;
	for(k=0;k<=2;k++)
	{
		printf("Dice %d:%d\n",k+1,arr2[k]);
		sumarr2=sumarr2+arr2[k];
	}
	
	
	int l, countarr1=0 , countarr2=0;
	for(l=0;l<=2;l++){
	if(arr1[l]==6)
	{
		countarr1=countarr1+1;
	}
	
	if(arr2[l]==6)
	{
		countarr2=countarr2+1;
	}
	
}
     if(countarr1==3)
{
	sumarr1=0;
}

if(countarr2==3)
{
	sumarr2=0;
}
	if(sumarr1==0 || sumarr2==0 || sumarr1==sumarr2)
	{
	int m;
	for(m=0;m<=2;m++)
	{
		if(arr1[m]>arr2[m])
		{
			printf("The Winner is %s...\n",player1);
			break;
		}
		else if(arr1[m]<arr2[m])
		{
			printf("The Winner is %s...\n",player2);
			break;
		}
		/*else if(arr1[m]==arr2[m])
		{
		
		 continue;
		}*/
		else{
			printf("The game is Tie\n");
			break;
		}
		
		
	}
	}
	
		printf("Calculating the total score...\n");
		printf("Total score of %s : %d\n",player1,sumarr1);
		printf("Total score of %s : %d\n",player2,sumarr2);
		if(sumarr1>sumarr2)
		{
		printf("And the winner is %s...",player1);
		}
                  else if(sumarr1<sumarr2)
		{
		printf("And the winner is %s...",player2);
		}
		else {
		printf("The game is Tie");
		}
			return 0;
			
	
}
