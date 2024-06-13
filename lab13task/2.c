#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int randomno(int n)
{
srand(time(NULL));
return rand()%n-1;


}



int main(void)
{
int n;


printf("Enter the size of the array ");
scanf("%d",&n);

int arr[n];

arr[0]=randomno(n);

int i,mul=1;


for(i=1; i<=n ;i++)

{
       arr[i]=arr[i-1]*arr[i-1];
        printf("index %d : %d\n",arr[i-1],arr[i]);


}
return 0;

}
