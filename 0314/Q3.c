#include <stdio.h>

int main(int argc, char const *argv[])
{
    unsigned long long low, high;
    while (scanf("%llu %llu", &low, &high))
    {
        if (low == 0 && high == 0)
        {
            break;
        }
        else
        {
            unsigned long long ans1 = low/5, ans2 = high/5;
            unsigned long long ans = ans2 - ans1 + 1;
            printf("%llu\n", ans);
        }
    }
}
