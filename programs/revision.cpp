//calculate the area room l b h volume
#include<iostream>
using namespace std;
class A
{
	protected : int l,b,h;
	public:getdata()
	{
		cout<<"Enter the value of length breadth area : ";
		cin>>l>>b>>h;
	}
};
class B
{
	protected : int Area;
	public:void calculate()
	{
		Area=l*b;
	 } 
	 void display()
	 {
	 	cout<<"The Area is "<<Area;
	 }
};
class C
{
	protected : int volume;
	public:void calculate1()
	{
		volume=l*b*h;
		
	}
	void display1()
	{
		cout<<"The volume is "<<volume;
	}
};
int main()
{
	A obj;
	obj.getdata();
	
	B obj1;
	obj1.calculate();
	obj1.display();
	
	C obj2;
	obj2.calculate1();
	obj2.void display1();
	
}

