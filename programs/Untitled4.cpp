#include<iostream>

using namespace std;
class person
{
	int b;
	public: person()
	{
	cout<<"Enter your name";
	cin>>b;
    }
    void display()
	{
    cout<<" The b is="<<b;
    } 
};
int main()
{
	person a;
	a.display();
}
