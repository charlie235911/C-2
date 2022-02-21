#include <iostream>
using namespace std;

int main(void)
{
    char a[9][9];
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> a[i][j];
        }
    }
    int c = 0;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            for (int k = j + 1; k < 9; k++)
            {
                if (a[i][j] == a[i][k] && a[i][j] != 0)
                {
                    cout << "row" << c << " #" << a[i][k] << endl;
                    c++;
                    break;
                }
            }
        }
    }
    int d = 0;
    for (int j = 0; j < 9; j++)
    {
        for (int i = 0; i < 8; i++)
        {
            for (int k = i + 1; k < 9; k++)
            {
                if (a[i][j] == a[k][j] && a[i][j] != 0)
                {
                    cout << "column" << d << " #" << a[k][j] << endl;
                    d++;
                    break;
                }
            }
        }
    }
    int e = 0, check = 0;
    for (int i = 0; i < 7; i + 3)
    {
        for (int j = 0; j < 7; j + 3)
        {
            for (int h = 0; h < i + 2; h++)
            {
                for (int k = 0; k < 2; k++)
                {
                    if (a[h][j] == a[h][j + k] && a[h][j] != 0)
                    {
                        cout << "block" << e << " #" << a[h][j] << endl;
                        e++;
                        check = 1;
                        break;
                    }
                }
                if (check = 1)
                {
                    check = 0;
                    break;
                }
            }
        }
    }
    if (c == 0 && d == 0 && e == 0)
    {
        cout << "true" << endl;
    }
}