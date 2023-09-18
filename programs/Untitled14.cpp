#include<iostream>


using namespace std;


void name(void); //name function


int my_variable = 10; // Global x


int main() {

    name(); //name function


    int my_variable = 100; // Local x


    cout << "Value of global my_variable is " << ::my_variable << endl;


    cout << "Value of local my_variable is " << my_variable << endl;


    return 0;


}


void name(void) //function for printing the name

{

    cout << endl

         << "GURSEWAK SINGH" << endl

         << "20BCS3288" << endl << endl;

}
