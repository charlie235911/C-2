#include <stdio.h>

int main(int argc, char const *argv[])
{
    int j, r, x = 0, ans[177] = {0};
    while (1 == 1)
    {
        scanf("%d %d", &j, &r);
        if (j == 0 && r == 0)
        {
            break;
        }
        else
        {
            int game[177222] = {0}, score[177222] = {0};
            for (int i = 0; i < j * r; i++)
            {
                scanf("%d", &game[i]);
            }
            if (j == 1)
            {
                ans[x] = 1;
            }
            else if (r == 1)
            {
                int temp1 = 0, temp2 = game[0];
                for (int i = 0; i < j; i++)
                {
                    for (int l = i + 1; l < j; l++)
                    {
                        if (game[l] >= temp2)
                        {
                            temp2 = game[l];
                            temp1 = l + 1; 
                        }
                        else if (temp2 > game[l] && l == j - 1 && temp2 == game[0])
                        {
                            temp1 = 1;
                        }
                    }
                }
                ans[x] = temp1;
            }
            else
            {
                for (int h = 0; h < r; h++)
                {
                    for (int k = 0; k < j - 1; k++)
                    {
                        for (int l = k + 1; l < j; l++)
                        {
                            if (game[h * j + l] >= game[h * j + k])
                            {
                                score[l + 1]++;
                            }
                            else if (game[h * j + l] < game[h * j + k])
                            {
                                score[k + 1]++;
                            }
                        }
                    }
                }
                int temp = 0;
                for (int n = 1; n < j; n++)
                {
                    for (int m = n + 1; m <= j; m++)
                    {
                        if (score[m] >= score[n])
                        {
                            temp = m;
                        }
                        else
                        {
                            temp = n;
                        }
                    }
                }
                ans[x] = temp;
            }
            x++;
        }
    }
    for (int i = 0; i < x; i++)
    {
        printf("%d\n", ans[i]);
    }
}
