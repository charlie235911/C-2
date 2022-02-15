#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    int m, tempt = 0;
    char str[10][50], ans;
    scanf("%d", &m);
    for (int i = 0; i <= m; i++)
    {
        gets(str[i]);
    }
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j < strlen(str[i]); j++)
        {
            if (isdigit(str[i][j]))
            {
                for (int k = tempt; k < j; k++)
                {
                    ans = str[i][k] + (str[i][j] - '0');
                    if (ans > 90)
                    {
                        ans = ans - 26;
                    }
                    if (str[i][k] == ' ')
                    {
                        continue;
                    }
                    else
                    {
                        printf("%c", ans);
                    }
                }
                tempt = j + 1;
            }
            else if (isalpha(str[i][j]) && j == strlen(str[i]) - 1)
            {
                for (int k = tempt; k < strlen(str[i]); k++)
                {
                    ans = str[i][k];
                    if (str[i][k] == ' ')
                    {
                        continue;
                    }
                    else
                    {
                        printf("%c", ans);
                    }
                }
            }
        }
        if (i == 0)
        {
            continue;
        }
        else
        {
            printf("\n");
        }
        tempt = 0;
    }
}