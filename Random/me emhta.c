#include<stdio.h>
int main()
{
int students,i,j;
int quiz;
int total1=0;
int total2=0;
int total3=0;
int total4=0;
int total5=0;
int arr[students][quiz];
float std_sum=0.0;

printf("Enter the number of students : \n");
scanf("%d",&students);
printf("Enter the number of quizez : \n");
scanf("%d",&quiz);
for (i=0;i<students;i++)
{    printf("Enter the marks of student %d \n",i+1);
		for (j=0;j<quiz;j++)
		{
		
			scanf("%d",&arr[i][j]);
			
		}
		//std_avg=std
	//printf("")			
}
float class_sum=0;
for (i=0;i<students;i++)
{
	for (j=0;j<quiz-1;j++)
	{
		class_sum=class_sum+arr[i][j];
		std_sum=std_sum+arr[i][j];
	}
	float std_avg;
    std_avg = std_sum/quiz;
	printf("average of student %d is %d \n ",i+1,std_avg);
}
float class_avg = class_sum/(students*quiz);
printf("class average is %f ",class_avg);

}
