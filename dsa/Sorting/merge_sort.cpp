#include <bits/stdc++.h>
using namespace std;
class Solution
{

public:
    void merge(int arr[], int l, int mid, int r)
    {
        int i = l;
        int j = mid + 1;
        int f = l; // for storing the elements in the temporarry array
        int temp[100000];
        // storing the elements in the temporary array
        while (i <= mid && j <= r)
        {
            if (arr[i] < arr[j])
            {
                temp[f] = arr[i];
                i++;
            }
            else
            {
                temp[f] = arr[j];
                j++;
            }
            f++;
        }
        // If the elements are still left in the left array i.e. the array less then mid;
        if (i > mid)
        {
            while (j <= r)
            {
                temp[f] = arr[j];
                j++;
                f++;
            }
        }
        else
        {
            while (i <= mid)
            {
                temp[f] = arr[i];
                i++;
                f++;
            }
        }

        // Copying the elements of the temporary array to the original array
        for (int f = l; f <= r; f++)
        {
            arr[f] = temp[f];
        }
    }

public:
    void mergesort(int arr[], int l, int r)
    {
        if (l < r)
        {
            int mid = l + (r - l) / 2;
            mergesort(arr, l, mid);
            mergesort(arr, mid + 1, r);
            merge(arr, l, mid, r);
        }
    }
};
int main()
{
    int arr[] = {9, 4, 7, 6, 3, 1, 5};
    int n = 7;
    Solution obj;
    cout << "Before Sorting the array " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    obj.mergesort(arr, 0, n - 1);
    cout << "After Sorting the array " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}