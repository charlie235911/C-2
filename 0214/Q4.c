#include <stdio.h>

int main(void)
{
    int n, d1[4], d2[4], d3[4], d4[4], l1[6], l2[6], sqr1, sqr2, p1, p2, count1 = 0, count2 = 0, check;
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
        d1[i] = d1[i] * n;
        d2[i] = d2[i] * n;
        d3[i] = d3[i] * n;
        d4[i] = d4[i] * n;
    }
    for (int i = 0; i < 6; i++)
    {
        if (i == 3)
        {
            int a = d1[i] - d1[0];
            int b = d2[i] - d2[0];
            if (a < 0)
            {
                a = a * (-1);
            }
            if (b < 0)
            {
                b = b * (-1);
            }
            if (a == 0)
            {
                l1[i] = b * b;
            }
            else if (b == 0)
            {
                l1[i] = a * a;
            }
            else
            {
                l1[i] = a * a + b * b;
            }
        }
        else if (i == 4)
        {
            int a = d1[0] - d1[2];
            int b = d2[0] - d2[2];
            if (a < 0)
            {
                a = a * (-1);
            }
            if (b < 0)
            {
                b = b * (-1);
            }
            if (a == 0)
            {
                l1[i] = b * b;
            }
            else if (b == 0)
            {
                l1[i] = a * a;
            }
            else
            {
                l1[i] = a * a + b * b;
            }
        }
        else if (i == 5)
        {
            int a = d1[1] - d1[3];
            int b = d2[1] - d2[3];
            if (a < 0)
            {
                a = a * (-1);
            }
            if (b < 0)
            {
                b = b * (-1);
            }
            if (a == 0)
            {
                l1[i] = b * b;
            }
            else if (b == 0)
            {
                l1[i] = a * a;
            }
            else
            {
                l1[i] = a * a + b * b;
            }
        }
        else
        {
            int a = d1[i] - d1[i + 1];
            int b = d2[i] - d2[i + 1];
            if (a < 0)
            {
                a = a * (-1);
            }
            if (b < 0)
            {
                b = b * (-1);
            }
            if (a == 0)
            {
                l1[i] = b * b;
            }
            else if (b == 0)
            {
                l1[i] = a * a;
            }
            else
            {
                l1[i] = a * a + b * b;
            }
        }
    }
    for (int i = 0; i < 6; i++)
    {
        if (i == 3)
        {
            int a = d3[i] - d3[0];
            int b = d4[i] - d4[0];
            if (a < 0)
            {
                a = a * (-1);
            }
            if (b < 0)
            {
                b = b * (-1);
            }
            if (a == 0)
            {
                l2[i] = b * b;
            }
            else if (b == 0)
            {
                l2[i] = a * a;
            }
            else
            {
                l2[i] = a * a + b * b;
            }
        }
        else if (i == 4)
        {
            int a = d3[0] - d3[2];
            int b = d4[0] - d4[2];
            if (a < 0)
            {
                a = a * (-1);
            }
            if (b < 0)
            {
                b = b * (-1);
            }
            if (a == 0)
            {
                l2[i] = b * b;
            }
            else if (b == 0)
            {
                l2[i] = a * a;
            }
            else
            {
                l2[i] = a * a + b * b;
            }
        }
        else if (i == 5)
        {
            int a = d3[1] - d3[3];
            int b = d4[1] - d4[3];
            if (a < 0)
            {
                a = a * (-1);
            }
            if (b < 0)
            {
                b = b * (-1);
            }
            if (a == 0)
            {
                l2[i] = b * b;
            }
            else if (b == 0)
            {
                l2[i] = a * a;
            }
            else
            {
                l2[i] = a * a + b * b;
            }
        }
        else
        {
            int a = d3[i] - d3[i + 1];
            int b = d4[i] - d4[i + 1];
            if (a < 0)
            {
                a = a * (-1);
            }
            if (b < 0)
            {
                b = b * (-1);
            }
            if (a == 0)
            {
                l2[i] = b * b;
            }
            else if (b == 0)
            {
                l2[i] = a * a;
            }
            else
            {
                l2[i] = a * a + b * b;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if (l1[i] == l1[j])
            {
                count1++;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if (l2[i] == l2[j])
            {
                count2++;
            }
        }
    }
    if (count1 == 7)
    {
        if (l1[0] * l1[1] == l1[2] * l1[3] && l1[0] * l1[1] == l1[1] * l1[2])
        {
            check = l1[0];
        }
        else
        {
            check = l1[0];
        }
        sqr1 = check;
        printf("Yes %d\n", sqr1);
        p1 = 1;
    }
    else
    {
        printf("No\n");
        p1 = 0;
    }
    if (count2 == 7)
    {
        if (l2[0] * l2[1] == l2[2] * l2[3] && l2[0] * l2[1] == l2[1] * l2[2])
        {
            check = l2[0];
        }
        else
        {
            check = l2[0];
        }
        sqr2 = check;
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
        else
        {
            printf("Peace");
        }
    }
    else
    {
        printf("Peace");
    }
}