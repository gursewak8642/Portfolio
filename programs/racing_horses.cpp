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
        int arr[n];
        int i=0;
        while ( i < n)
        {
            cin >> arr[i];
            i++;
        }
        sort(arr,arr+ n);
        int minn = arr[1] - arr[0];
        for (int i = 1; i < n - 1; i++)
        {
            int m = arr[i + 1] - arr[i];
            minn = min(minn, m);
        }
        cout << minn << endl;
    }
    return 0;
}