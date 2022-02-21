#include <iostream>
using namespace std;

int main()
{
    int l, m, n, k, a[10][10], tempt = 0, ans[10] = {0};
    cin >> l;
    for (int i = 0; i < l; i++)
    {
        cin >> m >> n >> k;
        for (int h = 0; h < m; h++)
        {
            for (int w = 0; w < n; w++)
            {
                cin >> a[h][w];
            }
        }
        for (int b = 0; b < m; b++)
        {
            for (int c = 0; c < n; c++)
            {
                for (int d = 0; d < k; d++)
                {
                    if (b + d >= m || c + d >= n)
                    {
                        continue;
                    }
                    else if (d == 0)
                    {
                        tempt += a[b][c];
                    }
                    else
                    {
                        tempt += a[b + d][c] + a[b][c + d] + a[b + d][c + d];
                    }
                }
                if (tempt > ans[i])
                {
                    ans[i] = tempt;
                }
                tempt = 0;
            }
        }
    }
    for (int i = 0; i < l; i++)
    {
        cout << ans[i] << endl;
    }
}