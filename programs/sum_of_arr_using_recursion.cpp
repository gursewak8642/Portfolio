#include <bits/stdc++.h>
using namespace std;
int sumOfArr(int arr[], int n)
{
    int count = 0;
    if (n == 0)
        return 0;
    if (n == 1)
        return arr[0];
    else
    {
        return arr[0] + sumOfArr(arr + 1, n - 1);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int m = sumOfArr(arr, n);
    cout << m << endl;
    return 0;
}