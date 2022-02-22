#include <iostream>
#include <string.h>
using namespace std;

int main(void)
{
    char n[100000];
    int l = 0, s = 0, num, total, a[100000];
    cin >> n;
    cout << n;
    for (l = 0; l < strlen(n); l++)
    {
        a[l] = n[l] - '0';
    }
    for (int i = strlen(n); i > 1; i--)
    {
        for (int j = 0; j <= strlen(n) - i; j++)
        {
            for (int k = j; k < j + i; k++)
            {
                s = 1;
                for (int h = k - j + 1; h < i; h++)
                {
                    num = n[k] - '0';
                    s *= 10;
                    total += num * s;
                }
            }
            for (int i = ; i < count; i++)
            {
                /* code */
            }
            
        }
    }
}