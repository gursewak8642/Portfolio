//Time complexity of binary search is o(log n) which is much better then linear search...

#include <bits/stdc++.h>
using namespace std;
void solve(int arr[], int key, int n)
{   
    int low = 0;
    int high = n - 1;
    int mid;
    while (low <= high)
    {
    mid = low +(high-low) / 2;

        if (arr[mid] == key)
        {

            cout << " Hurrah! We got the element in the array at index :- "<<mid+1;
            return;
        }
        else if (arr[mid] > key)
            high = mid - 1;
        else if (arr[mid] < key)
            low = mid + 1;
    }
    cout << "Sad! :( the element is not present ";
    return;
}
int main()
{
    int n;
    cout << "Enter the no of element := ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the key that have to be search :- ";
    cin >> key;
    solve(arr, key, n);
    return 0;
}