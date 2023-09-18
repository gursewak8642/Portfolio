// #include<iostream>
// using namespace std;
// int main()
// {
//     char name;
//     cout<<" What is your name";
//     cin>>name;

//     switch (name)
//     {
//         case 'A':
//         cout<<"Apple"<<endl;
//         break;

//         case 'B':
//         cout<<"Ball";
//         break;

//         case 'C':
//         cout<<"Cat";
//         break;

//         case 'D':
//         cout<<"dog";
//         break;

//         case 'E':
//         cout<<"Elephant";
//         break;

//         default:
//         cout<<"Out of syllabus.";

//     }
//         return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int a, b, c, max;
    a = 2;
    b = 2;
    c = 2;
    // max=(a>b) ?a:b;
    max = a > b ? (a > c ? a : c) : (b > c ? b : c);
    cout << "maximum number is " << max << endl;

    return 0;
}