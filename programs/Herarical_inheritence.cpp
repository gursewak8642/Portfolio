#include<iostream>
using namespace std;
class radius
{
	protected :int r;
	float pi=3.14;
	public : void getdata()
	{
		cout<<"\nEnter the value of radius ";
		cin>>r;
	}
};
class Circumference : public radius
{
	float circumference;
public:  

void calculate()
  {
  	circumference=2*pi*r;
  	
  }	
	void display()
	{	
	cout<<"\nThe circumference of a circle is "<<circumference;
    } 
};
class Area :public radius
{
	float area;
public:	

void calculate()
	{
		area=pi*r*r;
	}
	void display()
	{
		cout<<"\nThe area of the circle is "<<area;
	}
};
int main()
{
    Circumference obj1;
    obj1.getdata();
	obj1.calculate();
	obj1.display();
	
	Area obj2;
	obj2.getdata();
	obj2.calculate();
	obj2.display();
	
}
