#include<iostream>
using namespace std;
class  A
{
	protected : int p,r,t;
	public:void getdata()
	{
		cout<<"Enter the value of p,r,t";
		cin>>p>>r>>t;
	}
};
class B : public A
{
	int si;
	public: void Calculate()
	{
		si=(p*r*t)/100;
	}
	void display()
	{
		cout<<"the simple interest of the given value is "<<si;
	}
};
int main()
{
	B b;
	b.getdata();
	b.Calculate();
	b.display();
	
	
}

