#include <bits/stdc++.h>
using namespace std;
bool isSorted(int arr[], int n)
{
    if (n == 0 || n == 1)
        return true;
    if (arr[0] > arr[1])
        return false;
    else
    {

        bool isRemaining = isSorted(arr + 1, n - 1);
        return isRemaining;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int m = isSorted(arr, n);
    if (m == 1)
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}