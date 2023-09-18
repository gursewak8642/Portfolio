#include <iostream>

using namespace std;

void name(void); 

int main()

{

   name();

   float subjects;

   float marks;

   float i;

   float total = 0;

   cout << "ENTER NO OF SUBJECT'S : " << endl;

   cin >> subjects;

   cout <<endl<< "ENTER THE MARKS OF STUDENT IN " << subjects << " SUBJECTS :" << endl;

   for (i = 0; i < subjects; i++)

   {

       cout << "MARKS IN SUBJECT_" << i + 1 << " = ";

       cin >> marks;

       total += marks;

   }

   cout <<endl<< "TOTAL_MARKS = " << total << endl;

   float average;

   average = total / subjects;

   cout <<endl<< "AVERAGE_MARKS = " << average;


   return 0;

}


void name(void)

{

   cout << endl

        << endl

        << "GURSEWAK SINGH" << endl

        << "20BCS3288" << endl

        << endl;

}
