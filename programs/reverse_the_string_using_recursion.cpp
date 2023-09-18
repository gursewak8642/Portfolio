#include <bits/stdc++.h>
using namespace std;
void reverse(string &str, int i, int j)
{
    cout << "call recieved for " << str << endl;

    // base case
    if (i > j)
    {
        // cout<<str<<endl;
        return;
    }
    swap(str[i], str[j]);
    i++;
    j--;

    return reverse(str, i, j);
}
int main()
{
    string s;
    cin >> s;
    reverse(s, 0, s.length() - 1);
    cout << s << endl;
    return 0;
}