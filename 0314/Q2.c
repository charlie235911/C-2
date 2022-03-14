#include <stdio.h>

unsigned long long gcd(unsigned long long a, unsigned long long b)
{
    return b ? gcd(b, a % b) : a;
}

int main(void)
{
    unsigned long long v1, d1, v2, d2, x = 1;
    while (scanf("%llu %llu %llu %llu", &v1, &d1, &v2, &d2))
    {
        if (v1 == 0 && d1 == 0 && v2 == 0 && d2 == 0)
        {
            break;
        }
        else
        {
            unsigned long long time1 = d1 * v2, time2 = v1 * d2;
            if (time1 < time2)
            {
                printf("Case #%llu: You owe me a beer!\n", x);
            }
            else if (time1 > time2)
            {
                printf("Case #%llu: No beer for the captain.\n", x);
            }
            unsigned long long time = d1 * v2 + d2 * v1, dis = v1 * v2 * 2;
            unsigned long long check = gcd(time, dis);
            unsigned long long ans1 = time / check, ans2 = dis / check;
            if (ans2 == 1)
            {
                printf("Avg. arrival time: %llu\n", ans1);
            }
            else
            {
                printf("Avg. arrival time: %llu/%llu\n", ans1, ans2);
            }
        }
        x++;
    }
}
