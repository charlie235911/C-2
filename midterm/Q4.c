#include <stdio.h>

int main(void)
{
    int num, sp, row = 0;
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("the number must be an odd value!!\n");
    }
    else if (num % 2 == 1)
    {
        scanf(" %c", &sp);
        int p[100][100] = {' '};
        row = num;
        for (int i = 0; i < row; i++)
        {
            if (i == 0 || i == row - 1 || i == (row - 1) / 2)
            {
                for (int j = 0; j < num; j++)
                {
                    p[i][j] = sp;
                }
            }
            else if (i < (row - 1) / 2)
            {
                for (int j = 0; j < num; j++)
                {
                    if (j == 0 || j == num - 1 || j == (num - 1) / 2)
                    {
                        p[i][j] = sp;
                    }
                    else if (j >= (num - 1) / 2 - (i - 1) && j <= (num - 1) / 2 + (i - 1))
                    {
                        p[i][j] = sp;
                    }
                    else
                    {
                        p[i][j] = ' ';
                    }
                }
            }
            else if (i > (row - 1) / 2)
            {
                for (int j = 0; j < num; j++)
                {
                    if (j == 0 || j == num - 1 || j == (num - 1) / 2)
                    {
                        p[i][j] = sp;
                    }
                    else if (j >= (num - 1) / 2 - (num - i - 2)&& j <= (num - 1) / 2 + (num - i - 2))
                    {
                        p[i][j] = sp;
                    }
                    else
                    {
                        p[i][j] = ' ';
                    }
                }
            }
        }
        for (int i = 0; i < num; i++)
        {
            for (int j = 0; j < num; j++)
            {
                printf("%c", p[i][j]);
            }
            printf("\n");
        }
    }
}