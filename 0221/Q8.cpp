#include <iostream>
using namespace std;

int main()
{
    int n, a[9], f[9];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cin >> f[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < f[i]; j++)
        {
            for (int k = 1; k <= a[i]; k++)
            {
                for (int l = 0; l < k; l++)
                {
                    cout << k;
                }
                cout << endl;
            }
            for (int h = a[i] - 1; h > 0; h--)
            {
                for (int e = 0; e < h; e++)
                {
                    cout << h;
                }
                cout << endl;
            }
            cout << endl;
        }
    }
}