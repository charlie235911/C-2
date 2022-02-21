#include <stdio.h>

int main(void)
{
    int n, ans = 0;
    scanf("%d", &n);
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a[i], &b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = a[i]; j <= b[i]; j++)
        {
            int length = 1;
            int num = j;
            while (num != 1)
            {
                if (num % 2 == 1)
                {
                    num = num * 3 + 1;
                }
                else
                {
                    num = num / 2;
                }
                length++;
            }
            if (length > ans)
            {
                ans = length;
            }
        }
        printf("%d %d %d\n", a[i], b[i], ans);
        ans = 0;
    }
}