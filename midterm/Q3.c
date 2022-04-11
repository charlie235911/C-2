#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int num = 0, capital = 0, low = 0, special = 0, check = 0;
    char str[10000] = {0};
    scanf("%s", &str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (isdigit(str[i]))
        {
            num++;
        }
        else if (islower(str[i]))
        {
            low++;
        }
        else if (isupper(str[i]))
        {
            capital++;
        }
        else if (str[i] == '#' || str[i] == '$' || str[i] == '%' || str[i] == '@' || str[i] == '&')
        {
            special++;
        }
    }
    if (num == 0)
    {
        printf("No number\n");
        check++;
    }
    if (capital == 0)
    {
        printf("No capital alphabet\n");
        check++;
    }
    if (low == 0)
    {
        printf("No lower case alphabet\n");
        check++;   
    }
    if (special == 0)
    {
        printf("No special character\n");
        check++;
    }
    if (strlen(str) > 20 || strlen(str) < 8)
    {
        printf("Length is illegal\n");
        check++;
    }
    if (check == 0)
    {
        printf("Leigal\n");
    }
    return 0;
}