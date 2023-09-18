#include <bits/stdc++.h>
using namespace std;
int main()
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
            cout << s[0] << m << s[n-1] << endl;
        }
    }
    return 0;
}