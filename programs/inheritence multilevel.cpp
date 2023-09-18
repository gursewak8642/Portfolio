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
	protected :int si;
	public: void Calculate()
	{
		si=(p*r*t)/100;
	}	
};
class C : public B
{
		public:void display()
	{
		cout<<"the simple interest of the given value is "<<si;
	}
};
int main()
{
    C obj;
	obj.getdata();
	obj.Calculate();
	
	obj.display();
	
	
}

