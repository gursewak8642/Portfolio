#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string r;
        cin >> r;
        int cs0 = 0, cs1 = 0, cr0 = 0, cr1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                cs0++;
            else
                cs1++;

            if (r[i] == '0')
                cr0++;
            else
                cr1++;
        }
        if (cs0 == cr0 && cs1 == cr1)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}