#include<iostream>
using namespace std;
class add
{
	int a,b;
	float x,y;
	double z;
	public:add( int a1,int b1)
	{
		a=a1;
		b=b1;
	}
		add( float x1, float y1)
		{
		x=x1;
		y=y1;	
		}
	void display1()
	{
		cout<<"\nThe sum  of a1 and b1  is "<< a+b ;
				
	}
	void display2()
	{
		z=x+y;
		cout<<"\nThe sum of x1 and y1 is "<<z ;
		
	}
};
int main()
{
	int a1,b1;
	float x1,y1;
	cout<<"\nEnter the value of a1 and b1";
	cin>>a1>>b1;
	add obj(a1,b1);
	obj.display1();
	cout<<"\nEnter the value of x1 and y1";
	cin>>x1>>y1;
	
	
	
	add obj1(x1,y1);
	obj1.display2();
	
//	obj1.display();
}
