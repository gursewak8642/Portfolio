#include <bits/stdc++.h>
using namespace std;
bool findAnElement(int arr[], int k, int low, int high)
{
    int mid = (low + high) / 2;
    if (low > high)
        return 0;
    if (arr[mid] == k)
        return 1;
    else if (arr[mid] < k)
        return findAnElement(arr, k, mid + 1, high);
    else if (arr[mid] > k)
        return findAnElement(arr, k, low, mid - 1);
}
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    int low = 0, high = n - 1;
    int l = findAnElement(arr, k, low, high);
    cout << l << endl;
    return 0;
}

//SECOND WAY TO SOLVE USING ANOTHER DIMENSIONS I.E. THE MAIN DIFFERENCE IS THAT WE HAVE JUST CHANGE THE NAME OF THE VARIABLES ONLY.

// #include <bits/stdc++.h>
// using namespace std;
// bool binarySearch(int *arr, int s, int e, int k)
// {
//     int mid = s + (e - s) / 2;
//     if (s > e)
//     {
//         return false;
//     }
//     if (arr[mid] == k)
//         return true;
//     if (arr[mid] < k)
//     {
//         return binarySearch(arr, mid + 1, e, k);
//     }
//     else
//     {
//         return binarySearch(arr, s, mid - 1, k);
//     }
// }
// int main()
// {
//     int arr[6] = {2, 4, 6, 18, 14, 16};
//     int size = 6;
//     int k = 18;
//     int s = 0, e = size - 1;
//     cout << binarySearch(arr, s, e, k);
//     return 0;
// }