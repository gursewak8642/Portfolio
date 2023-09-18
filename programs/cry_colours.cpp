#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        int res = 0;
        ll arr[3][3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> arr[i][j];
            }
        }
        if (arr[0][0] == n && arr[1][1] == n && arr[2][2] == n)
        {
            cout << res << endl;
        }
        else{

        ll c = arr[1][0] + arr[2][0] + arr[2][1];
        ll d = arr[0][1] + arr[0][2] + arr[1][2];

        ll vkd = max(c, d);
        cout << vkd << endl;
        }
    }
    return 0;
}