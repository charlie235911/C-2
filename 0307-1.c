#include <stdio.h>

int main(int argc, char const *argv[])
{
    int t, ans[100000];
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int a[100000];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }
        int num = 0;
        for (int k = 1; k < n; k++)
        {
            for (int h = k - 1; h >= 0; h--)
            {
                if (a[h] <= a[k])
                {
                    num++;
                }
            }
        }
        ans[i] = num;
    }
    for (int i = 0; i < t; i++)
    {
        printf("%d\n", ans[i]);   
    }
}
