#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int num = arr[k - 1], count = 0;
    sort(arr, arr + n);
    if (arr[n - 1] == 0)
        cout << count << endl;
    else if (num == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >num)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= num)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}