#include <iostream>

using namespace std;

void name(void); //name function

int main() {

   name(); //name function

   int b, i, j, w, lr = 0, lc = 0, n, m;

   int a[10][10];

   cout << "enter the no. of rows in matrix\n";

   cin >> m;

   cout << "enter no. of columns in matrix\n";

   cin >> n;

   cout << "enter the elements in matrix\n";

   for (i = 0; i < m; i++) {

       for (j = 0; j < n; j++) {

           cin >> a[i][j];

       }

   }

   cout << "enter the base address\n";

   cin >> b;

   cout << "enter the storage size of one element stored in array\n";

   cin >> w;

   i = m - 1;

   j = n - 1;

   cout << "address of A[i][j]" << b + w * (n * (i - lr) + (j - lc));

   return 0;

}

void name(void) //function for printing the name

{

   cout << endl

        << "GURSEWAK SINGH" << endl

        << "20BCS3288" << endl << endl;

}
