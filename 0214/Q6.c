#include <stdio.h>
#include <math.h>

int main(void){
    int n, m, p[7000][100];
    scanf("%d %d", &n, &m);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &p[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d", p[i][j]);
        }
    }
}