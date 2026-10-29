#include <stdio.h>

int main(void) {
    int iter = 1;
    for (double x = 1.0; x <= 5.01; x += 1.0) {
        double y = x * x;
        printf("%d\t%.4f\t%.4f\n", iter, x, y);
        iter++;
    }
    return 0;
}