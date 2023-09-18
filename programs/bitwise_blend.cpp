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
        int arr[n], mrr[n];
        int a, b;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mrr[i] = arr[i];
        }
        sort(mrr, mrr + 1);
        if (mrr[n - 1] == 0)
        {
            cout << -1 << endl;
        }
        else
        {

            for (int i = 0; i < n; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    arr[i] = (arr[i] ^ arr[j]);
                    if (remainder((arr[i] & arr[i + 1]), 2) != remainder((arr[i] | arr[i + 1]), 2))
                    {
                        a = i + 1;
                        b = j + 1;
                    }
                }
            }
            cout << a << " " << b << endl;
        }
    }
    return 0;
}

