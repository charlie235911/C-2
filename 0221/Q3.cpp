#include <iostream>
#include <string.h>
using namespace std;

int main(void)
{
    char n[100000];
    int s = 0, num = 0, ans = 0, check = 0;
    cin >> n;
    if (strlen(n) >= 2)
    {
        for (int i = strlen(n); i >= 2; i--)
        {
            for (int j = 0; j <= strlen(n) - i; j++)
            {
                num = 0;
                check = 0;
                for (int k = j; k < j + i; k++)
                {
                    s = 1;
                    for (int h = k - j + 1; h < i; h++)
                    {
                        s *= 10;
                        num += (n[k] - '0') * s;
                    }
                }
                for (int x = 2; x * x <= num; x++)
                {
                    if (x % 2 == 0 && x > 2)
                    {
                        continue;
                    }
                    if (num % x == 0)
                    {
                        check = 1;
                        break;
                    }
                }
                if (check == 0)
                {
                    if (num > ans)
                    {
                        ans = num;
                    }
                }
            }
        }
    }
    for (int i = 0; i < strlen(n); i++)
    {
        check = 0;
        num = n[i] - '0';
        for (int j = 2; j < num; j++)
        {
            if (num % j == 0)
            {
                check = 1;
                break;
            }
        }
        if (check == 0)
        {
            if (num > ans)
            {
                ans = num;
            }
        }
    }
    if (ans == 0)
    {
        cout << "No prime found" << endl;
    }
    else
    {
        cout << ans << endl;
    }
}