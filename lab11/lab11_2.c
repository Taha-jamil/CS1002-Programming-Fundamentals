#include<stdio.h>
int main(void){
 int row;
 char symboll;

 printf("Enter the number of rows : ");
 scanf("%d",&row);
printf("Enter the Symbol : ");
 scanf(" %c",&symboll);

 for (int i = 0; i < row ;i++){ 

 for (int j = 1;j <= row - i;j++){ 

 printf(" ");
 }
for (int k = 0;k <= 2*i;k++)
 { 
 printf("%c",symboll);}
 printf("\n");
 }

 return 0;
}
