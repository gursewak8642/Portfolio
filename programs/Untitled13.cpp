#include<iostream>

using namespace std;

void name(void); //name function

class Employee {

    char name[30];

    int age;

    char desg[10];

    long salary;

public:

    void GetData();

    void PutData();

};

void Employee::GetData() {

    cout << "\nEnter the name of the Employee : ";

    cin >> name;

    cout << "Enter Age of " << name << " : ";

    cin >> age;

    cout << "Enter Designation of " << name << " : ";

    cin >> desg;

    cout << "Enter Salary of " << name << " : ";

    cin >> salary;

}

void Employee::PutData() {

    cout << "\nEmployee Name : " << name;

    cout << endl << name << "\tage : " << age;

    cout << endl << name << "\tDesignation : " << desg;

    cout << endl << name << "\tsalary : " << salary << endl;

}

int main() {

    name(); //name function

    Employee E[2];

    int i;

    for (i = 0; i < 2; i++) {

        E[i].GetData();

    }

    for (i = 0; i < 2; i++) {

        E[i].PutData();

    }

    return 0;

}

void name(void) //function for printing the name

{

    cout << endl

         << "GURSEWAK Singh" << endl

         << "20BCS3288" << endl;

}
