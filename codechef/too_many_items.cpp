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
        // 1 polybag = 10items
        int r = n % 10;

        if (r == 0)
            cout << n / 10 << endl;
        else
            cout << n / 10 + 1 << endl;
    }
    return 0;
}