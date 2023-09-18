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
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'B')
            {
                count += 2;
            }
            else if (s[i] == 'A' || s[i] == 'D' || s[i] == 'O' || s[i] == 'P' || s[i] == 'R')
            {
                count = count + 1;
            }
        }
        cout << count << endl;
    }
    return 0;
}