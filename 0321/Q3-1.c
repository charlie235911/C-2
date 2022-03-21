#include <stdio.h>

unsigned long long bigmod(unsigned long long b, unsigned long long p, unsigned long long m)
{
    unsigned long long ans = 1, tempt = b;
    while (p > 0)
    {
        if (p % 2)
        {
            ans *= tempt;
            ans %= m;
        }
        p /= 2;
        tempt *= tempt, tempt %= m;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    unsigned long long b = 0, p = 0, m = 0;
    while (scanf("%llu %llu %llu", &b, &p, &m) != EOF)
    {
        printf("%llu\n", bigmod(b, p, m));
    }
    return 0;
}