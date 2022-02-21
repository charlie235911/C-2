#include <iostream>
using namespace std;

int main()
{
    int n, m[128], num = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (m[j] == m[i])
            {
                num++;
            }
        }
    }
    if (num > 0)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << "1" << endl;
    }
}