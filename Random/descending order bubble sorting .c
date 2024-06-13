#include<stdio.h>
int main(void)
{
	int i,n,j,temp;
	
	printf("Enter the size for the array");
	scanf("%d",&n);
	int arr[n];
	
	for(i=0;i<n;i++)
 {      printf("Enter Element -%d \n",i+1);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{   if(arr[i]>=arr[j])
		{
		
			temp=arr[i];
			
			arr[i]=arr[j];
			arr[j]=temp;
	}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
