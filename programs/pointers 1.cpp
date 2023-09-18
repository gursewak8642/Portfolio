#include<iostream>
using namespace std;
int main()
{
//	What is meant by pointer?
//  Data types which holds the address of other operator.
//  &--->(Address of) the operator
//  *--->(Value at) deference operator
	int n =20;
	int *b = &n;
	
	cout<<"The address of n is "<< &n<<endl;
	cout<<"The address of n is "<<  b<<endl;
	cout<<"The value of b is   "<< *b<<endl;
	
	return 0;
}
