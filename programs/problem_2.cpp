// Take an input from the user and then write a program to print sum of all the digits present in n;

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int result = 0;

    for (int i = 0; i <= n; i++)
    {
        result = result + i;

        /* code */
    }
    cout << result;

    return 0;
}
