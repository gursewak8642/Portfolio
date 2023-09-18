#include<iostream>
using namespace std;
class complex
{
	float x,y;
	public:complex()
	{
		cout<<"Enter the value of x and y";
		cin>>x>>y;
	}
		complex(int a,int b)
		{
		x=a;
		y=b;	
		}
	void display()
	{
		cout<<"The value of x is "<<x<<"The vale of y is "<<y;
		
	}
};
int main()
{
	int n,m;
	cout<<"Enter the value of n and m";
    cin>>n>>m;
	complex obj;
	obj.display();
	complex obj1(n,m);
	obj1.display();
}
