#include <stdio.h>

int main(void)
{
    int m;
    float x[10], y[10], range;
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%f %f", &x[i], &y[i]);
    }
    for (int i = 0; i < m; i++)
    {
        range = (10 - x[i]) * (10 -x[i]) + (10 - y[i]) * (10 - y[i]);
        if (range <= 1)
        {
            printf("10\n");
        }
        else if (range <= 4)
        {
            printf("9\n");
        }
        else if (range <= 9)
        {
            printf("8\n");
        }
        else if (range <= 16)
        {
            printf("7\n");
        }
        else if (range <= 25)
        {
            printf("6\n");
        }
        else if (range <= 36)
        {
            printf("5\n");
        }
        else if (range <= 49)
        {
            printf("4\n");
        }
        else if (range <= 64)
        {
            printf("3\n");
        }
        else if (range <= 81)
        {
            printf("2\n");
        }
        else if (range <= 100)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }
}