#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {

        int n, a;

        cin >> n >> a;
        if (n == 1)
        {
            if (a % 2 == 0)
                cout << "Even" << endl;
            else
                cout << "Odd" << endl;
            continue;
        }
        if (a % 2 == 1)
        {
            if (n % 2 == 0)
                cout << "Even" << endl;
            else
                cout << "Odd" << endl;
        }
        else
            cout << "Impossible" << endl;
    }
        return 0;
}