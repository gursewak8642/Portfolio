#include<iostream>
using namespace std;
int main()
{

  int x,y;

  cout<<"Assign a value to x : ";

  cin>>x;

  cout<<"Assign a value to y : ";

  cin>>y;

  x = x ^ y; 

  y = x ^ y; 

  x = x ^ y; 

  cout << "After Swapping: x =" << x << ", y=" << y;

  return 0;

}
