//wap to put the zero on the end.
// time complexity is o(n)



#include <bits/stdc++.h>
using namespace std;

void move_to_zero(int arr[], int arr2[], int n)
{
    int count = 0, i = 0, j = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count++;
            continue;
        }
        else
        {
            arr2[j] = arr[i];
            j++;
        }
    }
    for (int i = j; i < n; i++)
    {
        arr2[i] = 0;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n], arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    move_to_zero(arr, arr2, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
    return 0;
}