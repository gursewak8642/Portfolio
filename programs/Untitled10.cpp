#include <iostream>

#include <math.h>

using namespace std;

void name(void); // NAME FUNCTION

int main()


{

   name();

   int n, first, last, sum, digits, nn, a, b;

   cout << "INPUT ANY NUMBER: \n(WHOSE FIRST AND LAST DIGITS YOU WANT TO SWAP)" << endl;

   cin >> n;

   digits = (int)log10(n);

   first = n / pow(10, digits);

   last = n % 10;

   a = first * (pow(10, digits));

   b = n % a;

   n = b / 10;

   nn = last * (pow(10, digits)) + (n * 10 + first);

   cout << endl

        << "THE NUMBER AFTER SWAPING THE FIRST AND LAST DIGIT IS : " << endl

        << nn << endl;

}

void name(void)

{

   cout << endl

        << endl

        << "GURSEWAK SINGH" << endl

        << "20BCS3288" << endl

        << endl;

}
