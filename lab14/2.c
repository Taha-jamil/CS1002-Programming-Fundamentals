// for transpose of Matrics

#include<stdio.h>
int main(){
int row,column;
printf("Enter the number of rows: ");
scanf("%d",&row);
for (int i = 0;i<2;i++ ){
printf("Enter the number of columns: ");
scanf("%d",&column);
if (column==row){
break;}
printf("Matrix must be square so enter again\n");
i--;
}
int arr[row][column];
for (int i = 0;i<row;i++){
for (int j =0;j<column;j++){

printf("Enter the number you want in rows %d column %d : ",i+1,j+1);
scanf("%d",&arr[i][j]);
}
}
printf("your given Matrics is: \n");
for (int i = 0;i<row;i++){
for (int j =0;j<column;j++){
printf("%d ",arr[i][j]);
}
printf("\n");
}
printf("Its transpose Matrics is: \n");
for (int j = 0;j<column;j++){
for (int i =0;i<row;i++){
printf("%d ",arr[i][j]);
}
printf("\n");
}

return 0;
}
