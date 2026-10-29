#include <stdio.h>
#include <math.h>

double calc(double a, double b) {
    return cos(a - b) + sin(a + b);
}

int main(void) {
    double a, b;
    while (scanf("%lf %lf", &a, &b) == 2) {
        double res = calc(a, b);
        printf("%.4f\n", res);
    }
    return 0;
}