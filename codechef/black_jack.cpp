#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int sum = 21;
        int max = sum - (a + b);
        if (max <= 0 || max >= 11)
            cout << -1 << endl;
        else
            cout << max << endl;
    }
    return 0;
}