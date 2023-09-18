

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, x;
        cin >> m >> x;
        int arr[x];
        for (int i = 1; i <= x; i++)
        {
            arr[i] = i;
            /* code */
        }

        while (arr[m] != 0)
        {
            for (int i = m; i <= x; i++)
                arr[i] = arr[i + 1];
        }

        for (int i = 1; i <= x; i++)
            cout << arr[i] << " ";
    }
    return 0;
}