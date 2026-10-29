#include <stdio.h>

#define SIZE 8

int main(void) {
    double arr[SIZE];
    
    for (int i = 0; i < SIZE; i++) {
        if (i == 0) {
            arr[i] = 1.0;
        } else {
            arr[i] = arr[i - 1] * 2.0 * (2.0 * i - 1.0) / (i + 1.0);
        }
    }
    
    double min = arr[0];
    for (int i = 1; i < SIZE; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    for (int i = 0; i < SIZE; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
    
    printf("%.2f\n", min);
    
    return 0;
}