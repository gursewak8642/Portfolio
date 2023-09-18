#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, b;
    cin >> n >> b;
    int cost[n];
    for (int i = 0; i < n; i++)
    {
        cin >> cost[i];
    }

    sort(cost, cost + n);
    int ptr = 0;
    int count = 0;
    while (ptr < n && b >= cost[ptr])
    {
        count++;
        b = b - cost[ptr];
        ptr++;
    }
    cout << count << endl;
    return 0;
}