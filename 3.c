#include <stdio.h>

int main(void)
{
    int n;
    while (1)
    {
        if (scanf("%d", &n) != 1 || n <= 0)
        {
            break;
        }

        double sum = 0.0;
        double term = 1.0;

        for (int i = 1; i <= n; i++)
        {
            term *= 2.0;
            sum += term;
        }

        printf("SUM: %.6f\n", sum);
    }
    return 0;
}