#include<stdio.h>
int main(void)
{
	int n,i,j,k=0,count=0,count3=0;

	
	printf("Input the number of elements to be stored in the array :  ");
	scanf("%d",&n);
	int arr[n];
		int count1[n];
	for(i=0;i<n;i++)
	{
			printf("Element -  %d \n",i);
		scanf("%d",&arr[i]);
		
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count+=2;
				count1[k]=count;
				k++;
				count=0;
			}
			  else 
			{
				count3++;
				count1[k]=count3;
				k++;
				count3=0;
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d occurs %d times\n",arr[i],count1[i]);
	}
	
return 0;	
}
