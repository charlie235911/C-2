#include <stdio.h>

int main(void)
{
    int h1, h2;
    float deg;
    scanf("%d %d", &h1, &h2);
    for (int i = h1; i <= h2; i++)
    {
        if (i > 12 && i < 24)
        {
            int tempt = i - 12;
            if (i == h2)
            {
                deg = tempt * 30;
                if (deg < 0)
                {
                    deg = deg * (-1);
                }
                if (deg <= 92 && deg >= 88)
                {
                    printf("%02d:00 degree=%.2f\n", i, deg);
                }
                else if (deg >= 268 && deg <= 272)
                {
                    printf("%02d:00 degree=%.2f\n", i, 360 - deg);
                }
            }
            else
            {
                for (int j = 0; j < 60; j++)
                {
                    deg = tempt * 30 + j * 0.5 - j * 6;
                    if (deg < 0)
                    {
                        deg = deg * (-1);
                    }
                    if (deg <= 92 && deg >= 88)
                    {
                        printf("%02d:%02d degree=%.2f\n", i, j, deg);
                    }
                    else if (deg >= 268 && deg <= 272)
                    {
                        printf("%02d:%02d degree=%.2f\n", i, j, 360 - deg);
                    }
                }
            }
        }
        else if (i >= 0 && i <= 12)
        {
            if (i == h2)
            {
                deg = i * 30;
                if (deg < 0)
                {
                    deg = deg * (-1);
                }
                if (deg <= 92 && deg >= 88)
                {
                    printf("%02d:00 degree=%.2f\n", i, deg);
                }
                else if (deg >= 268 && deg <= 272)
                {
                    printf("%02d:00 degree=%.2f\n", i, 360 - deg);
                }
            }
            else
            {
                for (int j = 0; j < 60; j++)
                {
                    deg = i * 30 + j * 0.5 - j * 6;
                    if (deg < 0)
                    {
                        deg = deg * (-1);
                    }
                    if (deg <= 92 && deg >= 88)
                    {
                        printf("%02d:%02d degree=%.2f\n", i, j, deg);
                    }
                    else if (deg >= 268 && deg <= 272)
                    {
                        printf("%02d:%02d degree=%.2f\n", i, j, 360 - deg);
                    }
                }
            }
        }
    }
}