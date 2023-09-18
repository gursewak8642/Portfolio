#include<iostream>
using namespace std;
class radius
{
	protected :int r;
	float pi=3.14;
	public : radius()
	{
		cout<<"\nEnter the value of radius ";
		cin>>r;
	}
};
class Circumference : public radius
{
	protected:float circumference;
public:  

void calculate()
  {
  	circumference=2*pi*r;
  	
  }	

};
class Area :public radius
{
	protected:float area;
public:	

void calculate1()
	{
		area=pi*r*r;
    }
};
class Display : public Circumference,public Area
{
	public:	void display()
	{
		cout<<"\nThe Circumference of the circle is "<<circumference;
	}
	void display1()
	{
		cout<<"\nThe area of the circle is "<<area;
	}	
	
}; 
int main()
{
    Display obj1;
    //obj1.getdata();
	obj1.calculate();
	obj1.display();
	obj1.calculate1();
	obj1.display1();
	}
