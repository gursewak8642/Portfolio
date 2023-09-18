#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    int arr[n][n];
    int l, m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] != 0)
            {
                l = i;
                m = j;
            }
        }
    }
    int ans1 = 0;
    int ans2 = 0;
    if (l < 3 && m < 3)
    {
        ans1 = 3 - l;
        ans2 = 3 - m;
    }
    else if (l < 3 && m >= 3)
    {
        ans1 = 3 - l;
        ans2 = m - 3;
    }
    else if (l >= 3 && m < 3)
    {
        ans1 = l - 3;
        ans2 = 3 - m;
    }
    else
    {
        ans1 = l - 3;
        ans2 = m - 3;
    }
    cout << ans1 + ans2 << endl;
    return 0;
}