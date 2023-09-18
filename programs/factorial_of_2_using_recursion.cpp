#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int f(ll n)
{
    if (n == 1 || n == 0)
        return 1;
    else
        return n * f(n - 1);
}
int main()
{
     ll n;
    cin >> n;
    cout << "Factorial of " << n << " is : " << f(n);
}