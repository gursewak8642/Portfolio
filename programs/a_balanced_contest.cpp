#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, p;
        cin >> n >> p;
        int arr[n];
        int calkwalk = 0, hard = 0;
        int c = p / 2, h = p / 10;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] <= h)
                hard++;
            else if (arr[i] >= c)
                calkwalk++;
        }
        // cout << "calkwalk " << calkwalk << " "
        //      << " hard " << hard << endl;
        if (calkwalk == 1 && hard == 2)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}