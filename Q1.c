#include <stdio.h>

int fun(int a, int b)
{
    if (a > b)
    {
        if (b == 0)
        {
            return a;
        }
        else
        {
            return fun(b, a % b);
        }
    }
    else if (b > a)
    {
        if (a == 0)
        {
            return b;
        }
        else
        {
            return fun(a, b % a);
        }
    }
    else
    {
        return a;
    }
}

int main(int argc, char const *argv[])
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    printf("%d", fun(a, b));
    return 0;
}
