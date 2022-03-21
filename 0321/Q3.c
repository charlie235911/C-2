#include <stdio.h>

unsigned long long bigmod(unsigned long long b, unsigned long long p, unsigned long long m)
{
    if (p == 0)
    {
        return 1;
    }
    else if (p == 1)
    {
        return b % m;
    }
    else if (p % 2 == 0)
    {
        unsigned long long a = bigmod(b, p / 2, m);
        return (a * a) % m;
    }
    else if (p % 2 == 1)
    {
        unsigned long long d = bigmod(b, p - 1, m);
        unsigned long long c = b % m;
        return (c * d) % m;
    }
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
