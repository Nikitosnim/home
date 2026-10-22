#include <stdio.h>
#include <stdint.h>

int main(void)
{
    int16_t v1, v2, t;

    scanf("%hd %hd %hd", &v1, &v2, &t);

    float result = (float)(v2 - v1) / t;

    printf("Result: %f\n", result);
    printf("sizeof(int16_t): %llu\n", (unsigned long long)sizeof(int16_t));
    printf("sizeof(float): %llu\n", (unsigned long long)sizeof(float));

    return 0;
}