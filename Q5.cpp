#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x1, x2, y1, y2, x, y;
    double m;
    cin >> x1 >> y1; 
    cin >> x2 >> y2;
    x = x2 - x1;
    y = y2 - y1;
    m = y / x;
    cout << setprecision(1) << fixed << m << endl;
}