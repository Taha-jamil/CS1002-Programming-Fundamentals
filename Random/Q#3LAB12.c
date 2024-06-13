#include<stdio.h>
int main (void)
{
	int arr[25];
	int i,j,k,l;
	printf("Enter the Number");
	for( i = 0 ; i<25 ; i++)
	{
		scanf("%d",&arr[i]);
	}
	for( j=0 ; j<25 ; j++)
	{
		if(arr[j] < 10 || arr[j] > 100)
		{
			for( k = 0 ; k<25 ; k++)
			{
				if(arr[j]!=arr[k])
				{
					scanf("%d",arr[j]);
				}
			}
		}
	}
	for(l = 0 ; k<25 ; k++)
	{
		printf("%d",arr[k]);
	}
	return 0;
}
