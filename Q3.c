#include <stdio.h>

int main(void)
{
    int m, a, n[100], p[100][100], length[100], ans;
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &n[i]);
        for (int j = 0; j < n[i]; j++)
        {
            scanf("%d", &p[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int c = 0; c < 100; c++)
        {
            length[c] = 0;
        }
        for (int j = 0, a = 0; j < n[i]; j++)
        {
            if (p[i][j] == p[i][j - 1])
            {
                length[a]++;
            }
            else if (p[i][j] != p[i][j - 1])
            {
                a++;
                length[a]++;
            }
        }
        for (int k = 0; k < a; k++)
        {
            if (length[k] > length[0])
            {
                length[0] = length[k];
            }
        }
        ans = length[0];
        printf("%d\n", ans);
    }
}