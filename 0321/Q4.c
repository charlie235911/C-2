#include <stdio.h>

long long gcd(long long a, long long b)
{
    long long x, y, ans;
    if (a == b)
    {
        x = 0;
        y = 1;
        ans = a;
        printf("%lld %lld %lld\n", x, y, ans);
    }
    else
    {
        int flag = 0;
        long long x1 = 1, y1 = 0, x2 = 0, y2 = 1, tempt;
        while (a % b)
        {
            if (flag == 1)
            {
                x2 -= a / b * x1;
                y2 -= a / b * y1;
                flag = 0;
            }
            else
            {
                x1 -= a / b * x2;
                y1 -= a / b * y2;
                flag = 1;
            }
            tempt = a, a = b, b = tempt % b;
        }
        if (flag == 1)
        {
            printf("%lld %lld %lld\n", x1, y1, b);
        }
        else
        {
            printf("%lld %lld %lld\n", x2, y2, b);
        }
    }
}

int main(int argc, char const *argv[])
{
    long long a = 0, b = 0;
    while (scanf("%lld %lld", &a, &b) != EOF)
    {
        gcd(a, b);
    }
    return 0;
}
