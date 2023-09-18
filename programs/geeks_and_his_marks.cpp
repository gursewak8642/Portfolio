#include <bits/stdc++.h>
using namespace std;
int binary_search(int arr[], int n, int x)
{
    int count = 0, mid, low = 0, high = n - 1;
    while (low < high)
    {

        mid = (low + high) / 2;
        if (arr[mid] == x)
        {
            continue;
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else if (arr[mid] > x)
        {
            count = n - mid;
            return count;
        }
    }
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */

        long long int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
           cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout << binary_search(arr, n, x) << endl;
    }
    return 0;
}