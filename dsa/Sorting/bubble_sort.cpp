// #include<bits/stdc++.h>
// using namespace std;

// void bubbleSort(int arr[], int n)
// {
//     // Your code here
//     int i, j;
//     for (int i = 0; i < n - 1; i++)
//     {
//         // last elements are already sorted
//         for (j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << endl;
//     bubbleSort(arr, n);
//     return 0;
// }


// Another way to do this is
#include<bits/stdc++.h>
using namespace std;
void
solve (int arr[], int n)
{
int i,j;
for(int i=0;i<n-1;i++){
    for(j=0;j<n-i;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
}
  for(int i=0;i<n;i++)
  cout<<arr[i]<<" ";
}

int
main ()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
  solve (arr, n);
  return 0;
}