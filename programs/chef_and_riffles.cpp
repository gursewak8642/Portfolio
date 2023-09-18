#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    unsigned int t;
    cin >> t;
    while (t--)
    {
        ll n;
        ll k;
        cin >> n >> k;
        int a[n];
        int b[n];
        for (unsigned int i = 0; i < n; i++)
        {
            a[i] = i + 1;
            b[i] = 0;
        }
        if (n > 2)
        {
            k = k % (n - 2);
        }
        ll cnt = 0;
        while (cnt < k)
        {
            int x = 0;
            for (unsigned int i = 0; i < n; i = i + 2)
            {
                b[x] = a[i];
                x++;
            }
            for (unsigned int i = 1; i < n; i = i + 2)
            {
                b[x] = a[i];
                x++;
            }
            for (unsigned int i = 0; i < n; i++)
            {
                a[i] = b[i];
            }
            cnt++;
        }
        for (unsigned int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}