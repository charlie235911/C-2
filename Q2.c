#include <stdio.h>

int fun(int n, char start, char tmp, char end){
    if (n == 1)
    {
        printf("Move disk %d from %c to %c\n", n, start, end);
    }
    else
    {
        fun(n-1, start, end, tmp);
        printf("Move disk %d from %c to %c\n", n, start, end);
        fun(n-1, tmp, start, end);
    }
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    fun(n, 'A', 'B', 'C');
    return 0;
}
