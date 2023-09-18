// #include <iostream>
// using namespace std;

// int main()
// {
//     int passengers;
//     cout << "";
//     cin >> passengers;

//     int left_passengers = passengers % 50;

//     if (left_passengers == 0)
//     {

//         cout << "0 seats left";
//     }
//     else
//     {
//         int left_seats = 50 - left_passengers;

//         cout << left_seats;
//         cout << "";
//     }

//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    do{
      cout<<n;
   if(n%5==0) 
   {
     cout<<"Beep";
       }
      n--;
      cout<<endl;
       } while(n>0);
   //your code goes here
    return 0;
}