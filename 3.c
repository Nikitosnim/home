#include <stdio.h>

int main(void)
{
    int n;
    long long i = 1;

    scanf("%d", &n);

    while (n > 0)
    {
        long long cube = i * i * i;
        printf("%lld ", cube);
        i++;
        n--;
    }
    printf("\n");

    return 0;
}