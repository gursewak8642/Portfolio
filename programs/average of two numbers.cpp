//average of two numbers
#include<iostream>
using namespace std;
int main()
{
	int num1,num2,sum,average;
	cout<<"Enter the value of num1 and num2"<<endl;
	cin>>num1;
	cin>>num2;
	
	sum=num1+num2;
	average=sum/2;
	
	cout<<"The sum of two numbers is:-"<<sum<<endl; 
	cout<<"The average of the sum is:-"<<average<<endl;
	return 0;
}
