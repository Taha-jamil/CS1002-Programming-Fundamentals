// matrix to find lowest number
#include<stdio.h>
int main(){
int row,column;
row = 4;
column = 3;
printf("Welcome\n");
int arr[row][column];
for (int i = 0;i<row;i++){
for (int j =0;j<column;j++){
printf("Enter the number you want in rows %d column %d : ",i+1,j+1);
scanf("%d",&arr[i][j]);
}
}
int small_number;
small_number = arr[0][0];
for (int i = 0;i<row;i++){
for (int j =0;j<column;j++){
if(small_number >= arr[i][j]){
small_number = arr[i][j];
}
}
}
printf("the smallest number is %d\n",small_number);
return 0;
}
