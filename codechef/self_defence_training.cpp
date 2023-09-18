#include <bits/stdc++.h>
using namespace std;
int main()
{
    // she must between 10 to 60 years
    // n women ages given
    int t;
    cin >> t;
    while (t--)
    {
        /* code */

        int n;
        cin >> n;
        int arr[n], count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] >= 10 && arr[i] <= 60)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}