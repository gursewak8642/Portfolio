#include <bits/stdc++.h>
using namespace std;
bool checkPalindrome(string str, int i, int j)
{
    if (i > j)
    {
        return true;
    }
    if (str[i] == str[j])
    {
        i++;
        j--;
        checkPalindrome(str, i, j);
    }
    else
        return false;
}
int main()
{
    string s;
    cin >> s;
    cout << endl;
    bool palindrome = checkPalindrome(s, 0, s.length() - 1);
    if(palindrome)
    cout<<"it is a palindrome";
    else
    cout<<"it is not a palindrome";
    return 0;
}