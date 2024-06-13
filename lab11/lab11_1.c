 #include <stdio.h>
int main(void) {
 int n;
    float x,value,factorial = 1.0, sum = 0.0;
   printf("Enter value for n: ");
    scanf("%d", &n);
    if (n<0){
    printf("Invalid Input\n");
     return 1; 
     }
    printf("Enter value for x: ");
     scanf("%f", &x);
     for (int i = 0; i <= n; i++) {
    if (i != 0) {
    factorial *= i; } // Calculating factorial
     value = 1.0;
     for (int k = 1; k <= i; k++) {
   value *= x; // Calculating x^i
    }
    sum += value / factorial;
   }
    printf("%.2f\n", sum);
    return 0;
  }
