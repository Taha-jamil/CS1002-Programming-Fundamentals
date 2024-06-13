#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) {
        return 0; // 0 and 1 are not prime numbers
    }
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // num is divisible by a number other than 1 and itself, so it's not prime
        }
    }
    
    return 1; // num is a prime number
}

int main(void) {
    int m, n;
  
    printf("Enter the first number: ");
    scanf("%d", &m);
    printf("Enter the second number: ");
    scanf("%d", &n);
    
    if (m > n) {
        printf("The first number should be less than or equal to the second number.\n");
    } else {
        printf("Prime numbers between %d and %d: ", m, n);
        for (int i = m; i <= n; i++) {
            if (is_prime(i)) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    return 0;
}

