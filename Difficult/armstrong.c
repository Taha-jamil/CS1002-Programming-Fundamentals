#include<stdio.h>
int main(){
	
	int og_num;
	int sum=0;
	int last_num;
	int num;
	printf("Enter the number \n ");
	scanf("%d",&num);
	og_num= num;
	while (num!=0){
		last_num = num%10;
		sum = sum + (last_num* last_num* last_num);
		num = num/10;
	}
	if (sum == og_num){
		printf("ARmstrong number");
		
	}
	else {
		printf("NOt a arms");
	}
}
