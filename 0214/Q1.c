#include <stdio.h>

int main(void)
{
    float r, total;
    int n, p;
    scanf("%f %d %d", &r, &n, &p);
    for (int i = 0; i < n; i++)
    {
        total = (total + p) * (1 + r);
    }
    printf("%d", (int)total);
}