#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e, total;
    cin >> a >> b >> c >> d >> e;
    total = a * 1 + b * 2 + c * 2 + d * 2 - e * 2;
    if (total >= 45)
    {
        cout << "A" << endl;
    }
    else if (total <= 44 && total >= 35)
    {
        cout << "B" << endl;
    }
    else if (total <= 34 && total >= 25)
    {
        cout << "C" << endl;
    }
    else
    {
        cout << "D" << endl;
    }
}