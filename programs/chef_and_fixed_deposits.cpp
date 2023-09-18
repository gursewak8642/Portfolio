// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     /*
//     chef wants to purchase
//     need x gold coins
//     0 balance
//     chef has n fixed deposits
//     ith of ai coins
//     he wants to open min num of these deposits to make x coins
//     i have to tell the min no of deposits to mkake x coins or say impossible
//         */
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, x;
//         cin >> n >> x;
//         int arr[n], maxx = 0, count = 0;
//         ;
//         for (int i = 0; i < n; i++)
//         {

//             cin >> arr[i];
//             maxx = max(arr[i], maxx);
//         }
//         if (x <= maxx)
//             count = 1;
//         else
//         {
//             for (int i = 0; i < n; i++)
//             {
//                 for (int j = (i + 1); j < n; j++)
//                 {
//                     if (arr[i] + arr[j] == x)
//                     {
//                         count = 2;
//                         break;
//                     }
//                 }
//             }
//         }
//         if (count == 1)
//             cout << "1" << endl;
//         else if (count == 2)
//             cout << "2" << endl;
//         else
//             cout << "-1" << endl;
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
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, arr + n, greater<>());
        bool c = false;
        int sum = 0,i;
        for (i = 0; i < n; i++)
        {
            sum += arr[i];
            if (sum >= x)
            {
                c = true;
                break;
            }
        }
        if (c)
            cout << i + 1 << endl;
        else
            cout << "-1" << endl;
    }
    return 0;
}