#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int ur, ll, x[10000], y[10000], l[10000] = {0}, n = 0, wx[10000] = {0}, wy[10000] = {0};
    char d[10000], wd[10000] = {0};
    scanf("%d %d", &ur, &ll);
    while (scanf("%d %d %c", &x[n], &y[n], &d[n]) != EOF)
    {
        int temptx = x[n], tempty = y[n];
        char c[10000], temptd = d[n];
        scanf("%s", &c);
        for (int i = 0; i < strlen(c); i++)
        {
            if (c[i] == 'R')
            {
                if (d[n] == 'E')
                {
                    temptd = 'S';
                }
                else if (d[n] == 'S')
                {
                    temptd = 'W';
                }
                else if (d[n] == 'W')
                {
                    temptd = 'N';
                }
                else if (d[n] == 'N')
                {
                    temptd = 'E';
                }
            }
            else if (c[i] == 'L')
            {
                if (d[n] == 'E')
                {
                    temptd = 'N';
                }
                else if (d[n] == 'N')
                {
                    temptd = 'W';
                }
                else if (d[n] == 'W')
                {
                    temptd = 'S';
                }
                else if (d[n] == 'S')
                {
                    temptd = 'E';
                }
            }
            else if (c[i] == 'F')
            {
                if (d[n] == 'E')
                {
                    temptx++;
                }
                else if (d[n] == 'S')
                {
                    tempty--;
                }
                else if (d[n] == 'W')
                {
                    temptx--;
                }
                else if (d[n] == 'N')
                {
                    tempty++;
                }
            }
            if (temptx > ur || tempty > ll || temptx < 0 || tempty < 0)
            {
                for (int i = 0; i <= n; i++)
                {
                    if (temptx == wx[i] && tempty == wy[i] && temptd == wd[i])
                    {
                        temptx = x[n];
                        tempty = y[n];
                        temptd = d[n];
                        break;
                    }
                    else if (l[n] == 1)
                    {
                        break;
                    }
                    else if (i == n)
                    {
                        wx[n] = temptx;
                        wy[n] = tempty;
                        wd[n] = temptd;
                        l[n] = 1;
                        break;
                    }
                }
            }
            else
            {
                x[n] = temptx;
                y[n] = tempty;
                d[n] = temptd;
            }
        }
        n++;
    }
    for (int i = 0; i < n; i++)
    {
        if (l[i] == 0)
        {
            printf("%d %d %c\n", x[i], y[i], d[i]);
        }
        else
        {
            printf("%d %d %c LOST\n", x[i], y[i], d[i]);
        }
    }
}
