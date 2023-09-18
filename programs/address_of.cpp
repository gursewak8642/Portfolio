#include <bits/stdc++.h>
using namespace std;
int main()
{
    int b = 7;
    int *ptr = &b;

    cout << "Value of b :-" << b << endl;
    cout << "Address of b:-" << &b << endl;
    cout << "value of var bond extracted via pointer  :-" << *ptr << endl;

    float arr[10];
    float *arr_ptr = arr;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << "Arr[" << i << "] = " << *(arr_ptr + i) << " | "<<(arr_ptr + i)<< endl;
    }

    return 0;
}