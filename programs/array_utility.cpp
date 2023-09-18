#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Size of an array";
    cin >> n;

    int array[n];
    cout << "Drop all array values in space separated formaat";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int sum = 0;
    // calculate the sum of an array value
    for (int j = 0; j < n; j++)
    {
        // cout << array[j] << "\t";
        sum += array[j];
        /* code */
    }
 
    cout << "Sum of all the array values " << sum << endl;

    sort(array, array + n);
    for (int j = 0; j < n; j++)
    {
        cout << array[j] << "\t";
        sum += array[j];
        /* code */
    }

    return 0;
}