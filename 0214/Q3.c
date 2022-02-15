#include <stdio.h>

int main(void)
{
    int m = 0, n = 0, p[100] = {0}, length[10] = {0}, tempt = 1;
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &n);
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &p[j]);
        }
        for (int k = 1; k < n; k++)
        {
            if (p[k] != p[k - 1])
            {
                if (tempt > length[i])
                {
                    length[i] = tempt;
                }
                tempt = 0;
                tempt++;
            }
            else if (p[k] == p[k - 1])
            {
                tempt++;
                if (tempt == n)
                {
                    length[i] = tempt;
                }
                else if (k == n - 1 && tempt > length[i])
                {
                    length[i] = tempt;
                }
            }
        }
        tempt = 1;
    }
    for (int x = 0; x < m; x++)
    {
        printf("%d\n", length[x]);
    }
}