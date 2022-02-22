#include <iostream>
using namespace std;

int main(void)
{
    char a[9][9];
    int num[10] = {0}, tempt = 0, flag = 0;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            tempt = (a[i][j] - '0');
            if (tempt != 0)
            {
                num[tempt]++;
            }
            if (num[tempt] > 1)
            {
                cout << "row" << i + 1 << " #" << a[i][j] << endl;
                flag = 1;
                break;
            }
        }
        for (int n = 0; n < 10; n++)
        {
            num[n] = 0;
        }
    }
    for (int j = 0; j < 9; j++)
    {
        for (int i = 0; i < 9; i++)
        {
            tempt = (a[i][j] - '0');
            if (tempt != 0)
            {
                num[tempt]++;
            }
            if (num[tempt] > 1)
            {
                cout << "column" << j + 1 << " #" << a[i][j] << endl;
                flag = 1;
                break;
            }
        }
        for (int n = 0; n < 10; n++)
        {
            num[n] = 0;
        }
    }
    int e = 1, check = 0;
    for (int i = 0; i < 9; i += 3)
    {
        for (int j = 0; j < 9; j += 3)
        {
            check = 0;
            for (int h = i; h < i + 3; h++)
            {
                for (int k = j; k < j + 3; k++)
                {
                    tempt = (a[h][k] - '0');
                    if (tempt != 0)
                    {
                        num[tempt]++;
                    }
                    if (num[tempt] > 1)
                    {
                        cout << "block" << e << " #" << a[h][k] << endl;
                        check = 1;
                        flag = 1;
                        break;
                    }
                }
                if (check == 1)
                {
                    break;
                }
            }
            e++;
            for (int n = 0; n < 10; n++)
            {
                num[n] = 0;
            }
        }
    }
    if (flag == 0)
    {
        cout << "true" << endl;
    }
}