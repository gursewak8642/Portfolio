#include<iostream>
using namespace std;
int main()
{ 
    int age; 
	cout<<"Tell me your age : "<<endl;
	cin>>age;
	if(age<18)
	{
		cout<<"You cannot come to party"<<endl;
	}
	else if(age==18)
	{
		cout<<"Well you are a kid you will get a kid pass";
	}
	else
	{
		cout<<"You are most welcome to party ";
	}
}
