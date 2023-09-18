#include <iostream>
using namespace std;
class Marks
{
public:
    int subjects, marks; 
    float average,total = 0;
    void getdata()
    {
        cout << "how many subjects you have ";
        cin >> subjects;

        cout << "Enter the marks that  you recieve on your card  ";
        for (int i = 0; i < subjects; i++)
        {
            cin >> marks;
            total =total+ marks;
        }
    }
    void calculate()
    {
        average = total / subjects;
    }
    void display()
    {
        cout << "The average marks of the student is :" << average;
    }
};
int main()
{
    Marks A;
    A.getdata();
    A.calculate();
    A.display();
}
