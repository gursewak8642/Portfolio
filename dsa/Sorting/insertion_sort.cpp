// // { Driver Code Starts
// // C program for insertion sort
// #include <stdio.h>
// #include <math.h>

// void insertionSort(int arr[], int n);

// /* Function to print an array */
// void printArray(int arr[], int size)
// {
//     int i;
//     for (i = 0; i < size; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
// }

// // Driver program to test above functions
// int main()
// {
//     int arr[1000], n, T, i;

//     scanf("%d", &T);

//     while (T--)
//     {

//         scanf("%d", &n);

//         for (i = 0; i < n; i++)
//             scanf("%d", &arr[i]);

//         insertionSort(arr, n);
//         printArray(arr, n);
//     }
//     return 0;
// }
// // } Driver Code Ends

// //  static void insert(int arr[],int i)
// //  {
// //       // Your code here
// //  }
// // Function to sort the array using insertion sort algorithm.

// void insertionSort(int arr[], int n)
// {
//     // code here
//     int current, j;
//     for (int i = 1; i < n; i++)
//     {
//         current = arr[i];
//         j = i - 1;
//         while (j >= 0 && arr[j] > current)
//         {
//             arr[j + 1] = arr[j];
//             j = j - 1;
//         }
//         arr[j + 1] = current;
//     }
// }



// Another way to do this is 
#include<bits/stdc++.h>
using namespace std;
void
solve (int arr[], int n)
{
  for (int i = 1; i < n; i++)
    {
      int temp = arr[i];
      int j = i - 1;
      for (; j >= 0; j--)
	  {
	    if (arr[j] > temp)
	     {
	       arr[j + 1] = arr[j];
	     }
	    else
	       break;
	  }
      arr[j + 1] = temp;

    }
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
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
