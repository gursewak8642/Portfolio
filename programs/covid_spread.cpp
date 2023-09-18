#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        int count = 1;
        for (int i = 0; i <= d; i++)
        {
            if (i == 0)
                count = 1;
            else if (i >= 1 && i <= 10)
                count = count * 2;
            else if (i >= 11)
                count = count * 3;
        if (count >= n)
            count= n;
        }
            cout << count << endl;
    }
    return 0;
}