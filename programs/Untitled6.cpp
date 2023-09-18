//class implementation
#include<iostream>
using namespace std;
class item
{
	int number;
	float cost;
 public: void getdata()
 {
 	cout<<"Enter the value of number and cost";
 	cin>>number>>cost;
	 }	
	void display()
	{
		cout<<"Number="<<number<<"\n cost="<<cost;
	}
};
int main()
{
	item a;
	a.getdata();
	a.display();
}
