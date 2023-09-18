/* Take n as input from the user and write the progaram that work as follows:
  if n is odd: evaluate and print factorial
  if n is even: evaluate and print sum of all the whole numbers upto and including n
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int result = 0;

    if (n % 2 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            result = result + i;
        }
        cout << result << endl;
    }
    else
    {
        result = 1;
        int i = 1;

        while (i != n + 1)
        {
            result = result * i;
            i = i + 1;
        }
        cout << result << endl;
    }

    return 0;
}