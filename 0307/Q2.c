#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 0, s[100000], ans[100000];
    while (scanf("%d", &s[n]) == 1)
    {
        if (s[n] == 0)
        {
            break;
        }
        else
        {
            for (int i = 1; i <= s[n]; i++)
            {
                int num = 0;
                for (int j = 1; j <= i; j++)
                {
                    if (i % j == 0)
                    {
                        num += j;
                    }
                }
                if (num == s[n])
                {
                    ans[n] = i;
                }
            }
        }
        n++;
    }
    for (int i = 0; i < n; i++)
    {
        if (ans[i] == 0)
        {
            ans[i] = -1;
        }
        printf("Case %d: %d\n", i + 1, ans[i]);
    }
}
