#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int max = 0, count = 0;
            max = arr[i];
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] > max)
                    count++;
                
            }
            v.push_back(count);
        }
        for (int i = 0; i < n; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;

}