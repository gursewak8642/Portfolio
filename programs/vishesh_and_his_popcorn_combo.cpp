#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a1, a2, b1, b2, c1, c2;
        cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
        ll A, B, C;
        A = a1 + a2;
        B = b1 + b2;
        C = c1 + c2;
        if (A > B && A > C)
            cout << A << endl;
        else if (B > A && B > C)
            cout << B << endl;
        else
            cout << C << endl;
    }
    return 0;
}