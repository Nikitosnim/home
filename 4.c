#include <stdio.h>

int main(void)
{
    int n;
    long long i = 1;
    long long sum = 0;

    scanf("%d", &n);

    while (i <= n)
    {
        sum += i * i;
        i++;
    }

    printf("%lld\n", sum);

    return 0;
}