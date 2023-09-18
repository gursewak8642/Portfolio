#include <iostream>

using namespace std;

void name(void); // NAME FUNCTION

int main()

{

   name();

   int n, c, first = 0, second = 1, next;

   int a[20], i, j = 0, count = 0;

   cout << "Enter the no. of terms of Fibonacci series = "<<endl;

   cin >> n;

   cout <<endl<< "Terms of Fibonacci series are:" << endl;

   for (c = 0; c < n; c++)

   {

       if (c <= 1)

           next = c;

       else

       {

           next = first + second;

           first = second;

           second = next;

       }

       cout << next << endl;

       if (next - first > 1)

       {

           for (i = first + 1; i < next; i++)

           {

               a[j] = i;

               count++;

               j++;

           }

       }

   }

   cout <<endl<< "Missing numbers of the Fibonacci series are:" << endl;

   for (j = 0; j < count; j++)

       cout << a[j] << endl;

   return 0;

}

void name(void)

{

   cout << endl

        << endl

        << "LAGAN VERMA" << endl

        << "20BCS3515" << endl

        << endl;

}
