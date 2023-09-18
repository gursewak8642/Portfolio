#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll r;
        vector<int> v;

        while (a > 0 || b > 0)
        {
            r = (a % 10 + b % 10) % 10;
            a = a / 10;
            b = b / 10;
            v.push_back(r);
        }
        ll n = v.size();
        for (int i = n - 1; i >= 0; i--)
        {
            cout << v[i];
        }
        cout << endl;
    }
    return 0;
}