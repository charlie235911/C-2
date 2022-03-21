#include <stdio.h>

int main(int argc, char const *argv[])
{
    unsigned long long b = 0, p = 0, m = 0;
    while (scanf("%llu %llu %llu", &b, &p, &m) != EOF)
    {
        unsigned long long ans = 1, total = 1;
        while (1)
        {
            if (p == 0)
            {
                ans = 1;
            }
            else if (p == 1)
            {
                ans *= b % m;
            }
            else if (p % 2 == 0)
            {
                while (p != 1)
                {
                    p = p / 2;
                    for (unsigned long long i = 0; i < p / 2; i++)
                    {
                        total *= b;
                    }
                    ans *= ((total * total) % m);
                }
            }
            else if ()
            {
                /* code */
            }
            
        }

        printf("%llu\n", );
    }
    return 0;
}
