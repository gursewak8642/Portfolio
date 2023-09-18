#include <bits/stdc++.h>
using namespace std;
int main()
{
    /* three subjects dsa,toc,dm of 100 marks

    bigger score = better rank
    tied = much score in dsa
    if tied in dsa = much better in toc gets full
    if everything is same then same rank
    */
    int t;
    cin >> t;
    while (t--)
    {
        int dsa1, toc1, dm1, dsa2, toc2, dm2;
        cin >> dsa1 >> toc1 >> dm1 >> dsa2 >> toc2 >> dm2;
        int a = dsa1 + toc1 + dm1;
        int b = dsa2 + toc2 + dm2;
        if (dsa1 == dsa2 && toc1 == toc2 && dm1 == dm2)
            cout << "TIE" << endl;
        else if (a > b)
            cout << "Dragon" << endl;
        else if (b > a)
            cout << "Sloth" << endl;
        else if (a == b && dsa1 > dsa2)
            cout << "Dragon" << endl;
        else if (a == b && dsa2 > dsa1)
            cout << "Sloth" << endl;
        else if (a == b && dsa1 == dsa2 && toc1 > toc2)
            cout << "Dragon" << endl;
        else if (a == b && dsa1 == dsa2 && toc2 > toc1)
            cout << "Sloth" << endl;
    }
    return 0;
}