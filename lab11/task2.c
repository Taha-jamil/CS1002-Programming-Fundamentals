#include<stdio.h>
int main(void)
{

for(int row = 0; row<=5 ; row++)
{
  for(int space = 1; space <=5-row ; space++)
  {
  
  printf(" ");
  }
  for(int col = 0 ; col <= 2*row ; col++)
  {
     printf("%d",row);
  }
  
printf("\n");
}



}
