#include <stdio.h>
// #include <math.h>

int main(void){
    int n, d1[4], d2[4], d3[4], d4[4], l1[4], l2[4], sqr1, sqr2, p1, p2;
    scanf("%d", &n);
    for (int i = 0; i < 4; i++)
    {
        scanf("%d %d", &d1[i], &d2[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        scanf("%d %d", &d3[i], &d4[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        if (i == 3)
        {
            l1[i] = (d1[i] - d1[0]) ^ 2 + (d2[i] - d2[0]) ^ 2;
        }
        else
        {
            l1[i] = (d1[i] - d1[i+1]) ^ 2 + (d2[i] - d2[i+1]) ^ 2; 
        }
        printf("%d ", l1[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        if (i == 3)
        {
            l2[i] = (d3[i] - d3[0]) ^ 2 + (d4[i] - d4[0]) ^ 2;
        }
        else
        {
            l2[i] = (d3[i] - d3[i+1]) ^ 2 + (d4[i] - d4[i+1]) ^ 2; 
        }
        printf("%d ", l2[i]);
    }
    if (l1[0] == l1[1] == l1[2] == l1[3])
    {
        sqr1 = l1[0] * l1[1] * (n ^ 2);
        printf("Yes %d\n", sqr1);
        p1 = 1;
    }
    else
    {
        printf("No\n");
        p1 = 0;
    }
    if (l2[0] == l2[1] == l2[2] == l2[3])
    {
        sqr2 = l2[0] * l2[1] * (n ^ 2);
        printf("Yes %d\n", sqr2);
        p2 = 1;
    }
    else
    {
        printf("No\n");
        p2 = 0;
    }
    if (p1 > p2)
    {
        printf("A");
    }
    else if (p2 > p1)
    {
        printf("B");
    }
    else if (p1 == p2 == 1)
    {
        if (sqr1 > sqr2)
        {
            printf("A");
        }
        else if (sqr2 > sqr1)
        {
            printf("B");
        }
    }
    else
    {
        printf("Peace");
    }
}