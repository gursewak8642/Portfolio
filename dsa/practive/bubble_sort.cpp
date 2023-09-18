#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[], int size)
{
    for (int step = 0; step < size; ++step)
    {
        for (int i = 0; i < size - step; ++i)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return;
}
int main()
{
    // int n=5;
    int arr[] = {-2, 45, 0, 11, -9};
    int n = sizeof(arr) / sizeof(arr[0]);
    print(arr, n);
    bubble_sort(arr, n);
    cout << "The sorted algo is ";
    print(arr, n);

    return 0;
}