#include <stdio.h>

int max_digit_index(int arr[], int n);

int main(void) {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The index of the maximum digit is %d\n", max_digit_index(arr, n));

    return 0;
}

int max_digit_index(int arr[], int n) {
    int maxDigit = arr[0];
    int maxIndex = 0;

    for (int j = 1; j < n; j++) {
        if (maxDigit <= arr[j]) {
            maxDigit = arr[j];
            maxIndex = j;
        }
    }

    return maxIndex;
}



