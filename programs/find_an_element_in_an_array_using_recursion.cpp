#include <bits/stdc++.h>
using namespace std;
int findAnElement(int arr[], int n, int x)
{
    if (n == 0)
        return -1;
    else if (arr[0] == x)
        return 1;

    return findAnElement(arr + 1, n - 1,x);
}
int main()
{
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   cout<<findAnElement(arr, n, x)<<endl;
   return 0;
}