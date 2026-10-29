#include <stdio.h>

#define HEIGHT 5

int main(void) {
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < HEIGHT - 1 - i; j++) {
            printf(" ");
        }
        for (int k = 0; k < HEIGHT; k++) {
            printf("+");
        }
        printf("\n");
    }
    return 0;
}