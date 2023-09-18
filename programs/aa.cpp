//calculate the area room l b h volume
#include<iostream>
using namespace std;
class A
{
	protected : int l,b,h,Area,Volume;
	public:void getdata()
	{
		cout<<"Enter the value of length breadth area : ";
		cin>>l>>b>>h;
	}
	void Calculate()
	{
	Area=l*b;
	Volume=l*b*h;	
	}
	void display()
	{
		cout<<endl<<"The Area of the room is "<<Area;
        cout<<endl<<"TheVolume of the room is "<<Volume;

	}

};
int main()
{
	A b;
	b.getdata();
	b.Calculate();
	b.display();
	
	
}

