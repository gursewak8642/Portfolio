#include<iostream>
using namespace std;
class item
{
	int number;
	float cost;
public:	void getdata(int a,float b)
	{
		number=a;
		cost=b; 
	}
	void display()
	{
		cout<<"Number="<<number<<"Cost="<<cost;
	}
};
int main()
{
	int a;
	float b;
	item x;
	cout<<"Enter the value of a and b ";
	cin>>a>>b;
	x.getdata(a,b);
	x.display();
	
}
