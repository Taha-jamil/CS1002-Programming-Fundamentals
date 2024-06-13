#include<stdio.h>
int check_prime (int num);
int main (void){

  int num;
  printf("Enter any Number : ");
  scanf("%d",&num);
 int Prime = check_prime(num);
  return 0;
 
}
int check_prime (int num)
{
  if(num==2)
  {
 printf("Prime Number");

}
  if(num<=1)
  {
  printf("Not a Prime Number");
  
  }
  
  int i;
  
  for(i=2; i<=num;num%i==0)
  {
   printf("Prime Number");
   
   
}
   printf("Not a Prime NUmber");
  }
