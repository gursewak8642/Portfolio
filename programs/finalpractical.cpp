#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[8], i, s = 0, g, l;
    float avg;
    cout << "Enter 8 Numbers:\n";
    for (i = 0; i < 8; i++)
    {
        cin >> a[i];
        s = s + a[i];
        avg = s / 8.0;
    }
    cout << "Sum of Array Elements = "<< s<<endl;
    cout << "Average of Elements   = "<< avg<<endl;
    g = a[0];
    for (i = 0; i < 8; i++)
        if (a[i] > g)
            g = a[i];
    cout << "Greatest Element      = "<< g<<endl;
    l = a[0];
    for (i = 0; i < 8; i++)
        if (a[i] < l)
            l = a[i];
    cout << "Lowest Element        = "<< l<<endl;

    return 0;
}
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, sum = 0;
//     cout << "Enter length of array";
//     cin >> n;
//     int a[n];
//     cout << "Enter values of array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << " \nEnter value of a[" << i + 1 << "]";
//         cin >> a[i];
//         sum += a[i];
//     }
//     int avg = sum / n, s = a[0], l = a[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (s > a[i])
//         {
//             s = a[i];
//         }
//         if (l < a[i])
//         {
//             l = a[i];
//         }
//         cout << "\nSum : " << sum << "\naverage :" << avg << "\nsmallest :" << s << " \nLargest :" << l;
//     }

//     return 0;
// }