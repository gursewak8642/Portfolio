#include <bits/stdc++.h>
using namespace std;
int maind()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        if (n <= 10)
        {
            cout << s << endl;
        }
        else
        {
            int m = n - 2;
            cout << s[1] << m << s[n] << endl;
        }
    }
    return 0;
}