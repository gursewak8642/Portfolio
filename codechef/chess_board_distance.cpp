#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int X = abs(x1 - x2);
        int Y = abs(y1 - y2);
        // cout << "x = " << X << " y = " << Y << endl;
        cout << max(X, Y) << endl;
    }
    return 0;
}