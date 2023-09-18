/*
given a sequence a of n integers
such that every element is a power of 2

A sequence is called good if its sum is non negative power of 2;
i have to turn a into a good sequence

non empty sequence of a,
pick a positive integer x such that x<=2^30
and multiply every element of this subsequence by x;

find min number of operations required to turn a into good sequence
also find one sequence of operations which does this
if possible answers then choose any...
*/

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         int sum = 0;
//         int m = arr[0];
//         int mi;
//         for (int i = n - 1; i >= 0; i--)
//         {
//             if (arr[i] <= m)
//             {
//                 m = arr[i];
//                 mi = i;
//             }
//             sum += arr[i];
//         }
//         int p = ceil(log2(sum));
//         int d = pow(2, p) - sum;
//         if (d == 0)
//         {
//             cout << 0 << endl;
//             return 0;
//         }
//         int x = 1;
//         x = (d + m) / m;
//         cout << 1 << endl;
//         cout << 1 << " " << x << endl;
//         cout << mi + 1 << endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, n, s = 0, b, j = 1;
        cin >> n;
        int a[n], d[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            d[i] = a[i];
            s = s + a[i];
        }
        sort(a, a + n);
        b = ceil(log2(s));
        auto c = find(d, d + n, a[0]);
        j = ((pow(2, b) - s) + a[0] / a[0]);
        if ((s & s - 1) == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
            cout << 1 << " " << j;
            cout << endl;
            cout << (distance(d, c)) + 1 << endl;
        }
    }
    return 0;
}