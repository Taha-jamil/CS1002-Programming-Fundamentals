#include<stdio.h>
#include<stdlib.h>
int main(void)
{    int arr[50];
      int arr1[100][100];
    
int i,j;
	FILE* myfirstfile;
//	printf("ENter the number of line for file");
//	int n;
//	scanf("%d",&n);
	
	
	
//myfirstfile=fopen("myfirstfile","a");
//	
////	fprintf(myfirstfile," The file test.txt created successfully...!!");
//	 
//	 for(i=0;i<=n;i++)
//	 {   //scanf("%s",arr)
//	   fgets(arr,sizeof(arr),stdin);
//	 	fprintf(myfirstfile,"%s",arr);
//	 }
//
//	
//	fclose(myfirstfile);
	
	myfirstfile=fopen("myfirstfile","r");
	
		 char c;
	 
	 while((c=fgetc(myfirstfile))!=EOF)
	 {
	 	for(i=0;i<100;i++)
	 	{
		  // for(j=0;j<100;j++){
		   
	 //	printf("%c",c);
	 	if(c!='\n')
	 	{     
	 		scanf("%c",&arr1[i][100]);
	 		
		 }
//	}
	
	}
	 }
	 
	 fclose(myfirstfile);
	 
	 for(i=0;i<100;i++)
	 {
	 	for(j=0;j<100;j++)
	 	{
	 		printf("%c",arr1[i][j]);
		 }
	 }
	return 0;
}
