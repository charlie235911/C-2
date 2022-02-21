#include <iostream>
using namespace std;

int test(int length, int f)
{
    while (f != 1)
    {
        if (f % 2 == 0)
        {
            f = f / 2;
            length++;
        }
        else
        {
            f = 3 * f + 1;
            length++;
        }
    }
    return length;
}

int main()
{
    int n, i[100], j[100], ans = 0, length;
    cin >> n;
    for (int a = 0; a < n; a++)
    {
        cin >> i[a] >> j[a];
    }
    for (int b = 0; b < n; b++)
    {
        int num1 = i[b], num2 = j[b];
        for (int f = num1; f <= num2; f++)
        {
            length = 1;
            test(length, f);
            if (length > ans)
            {
                ans = length;
            }
        }
        cout << i[b] << " " << j[b] << " " << ans << endl;
        ans = 0;
    }
}