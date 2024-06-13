#include<stdio.h>
void conversion(float *Celcius,float *fahrenheit){
Celcius = (*fahrenheit - 32)(5.0/9.0);
}
int main(){
float Celcius,fahrenheit;
printf("Enter Temperature in fahrenheit: ");
scanf("%f",&fahrenheit);
conversion(&Celcius,&fahrenheit);
printf("temperature in Celcius is %.2f\n",Celcius);
return 0;
}

