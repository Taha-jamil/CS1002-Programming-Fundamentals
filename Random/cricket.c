#include<stdio.h>
float total_over(int balls);
int main(){

int balls,remaining_ball;
float overs;
  printf("Enter the balls: ");
  scanf("%d",&balls);

 overs = total_over(balls);
 remaining_ball = balls % 6;
 remaining_ball = remaining_ball * 10;
 (int) overs;

 
 printf("the bowler has bowled %d over and %d\n",overs,remaining_ball);  
return 0;
}

float total_over(int balls)
{ float overs;
   overs = balls/6.0;
    return overs;  }
