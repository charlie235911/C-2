#include <iostream>
using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = a[i]; j <= b[i]; j++)
        {
            int length = 1;
            int num = j;
            while (num != 1)
            {
                if (num % 2 == 1)
                {
                    num = num * 3 + 1;
                }
                else
                {
                    num = num / 2;
                }
                length++;
            }
            if (length > ans)
            {
                ans = length;
            }
            length = 0;
        }
        cout << a[i] << " " << b[i] << " " << ans << endl;
        ans = 0;
    }
}