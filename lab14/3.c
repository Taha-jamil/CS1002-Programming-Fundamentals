// for Sum of row Series of Matrix
#include<stdio.h>
int main(){
int row,column;
row = 3;
column = 3;
int arr[row][column];
for (int i = 0;i<row;i++){
for (int j =0;j<column;j++){
printf("Enter the number you want in rows %d column %d : ",i+1,j+1);
scanf("%d",&arr[i][j]);
}
}
printf("The Matrics is: \n");
for (int i = 0;i<row;i++){
for (int j =0;j<column;j++){
printf("%d ",arr[i][j]);

}
printf("\n");
}
int sum;
printf("The sum of rows of the matrix is: \n");
for (int i = 0;i<row;i++){
sum = 0;
for (int j =0;j<column;j++){
sum += arr[i][j];
}
printf("Row %d: %d\n",i+1,sum);
}

return 0;}

