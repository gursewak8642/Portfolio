#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, r = 0;
    cin >> n;
    string s;
    while (n)
    {
        cin>>s;
        if (s == "++X" || s == "X++")
            r++;
        else
            r--;

        n--;
    }
    cout << r << endl;
    return 0;
}