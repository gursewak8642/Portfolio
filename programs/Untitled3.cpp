//calculate the area room l b h volume
#include<iostream>
using namespace std;
class A
{
	int l,b,h,Area,Volume;
	public: A(int L,int B,int H)
	{
		l=L;
		b=B;
		h=H;
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
	
	int L,B,H;
	cout<<"Enter the value of length breadth area : ";
    cin>>L>>B>>H;
	A b(L,B,H);
	b.Calculate();
	b.display();
	
	
}

