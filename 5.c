#include <stdio.h>

double day_to_yr(double day)
{
    const double days_in_year = 365.0;
    return day / days_in_year;
}

int main(void)
{
    double day;

    while (scanf("%lf", &day) == 1)
    {
        double yr = day_to_yr(day);
        printf("%.2f\n", yr);
    }

    return 0;
}