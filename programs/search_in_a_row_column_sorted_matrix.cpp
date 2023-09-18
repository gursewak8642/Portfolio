#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    //Function to search a given number in row-column sorted matrix.
    bool search(vector<vector<int>> matrix, int n, int m, int x)
    {
        int l = n * m;
        for (int i = 0; i < l; i++)
        {
            for (int j = 0; i < l; i++)
            {
                if (matrix[i][j] == x)
                    return 1;
            }
        }
        return 0;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n);
        for (int i = 0; i < n; i++)
        {
            matrix[i].assign(m, 0);
            for (int j = 0; j < m; j++)
            {
                cin >> matrix[i][j];
            }
        }
        int x;
        cin >> x;
        Solution obj;
        if (obj.search(matrix, n, m, x))
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
    return 0;
}