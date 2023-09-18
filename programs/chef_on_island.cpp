#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, xr, yr, d;
        cin >> x >> y >> xr >> yr >> d;
        if (xr > x || yr > y)
        {
            cout << "NO" << endl;
        }
        else if (xr * d > x || yr * d > y)
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
    return 0;
}