#include<iostream>
using namespace std;
class A
{
	protected : int income;
	public:void getincome()
	{
		cout<<"Enter the value :";
		cin>>income;
	}
};
class B
{
	protected :int tax;
	public:void gettax()
	{
		cout<<"Enter the value :";
		cin>>tax;
		
	}
	
};
class  C :  public A,public B
{
	protected :int final_income;
	public:void display()
	{
		final_income=income-tax;
		cout<<"The finanl income is "<<final_income;	
	};
};
int main()
{
	C obj;
	obj.getincome();
	obj.gettax();
	obj.display();
}
