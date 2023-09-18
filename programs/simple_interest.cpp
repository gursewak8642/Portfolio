#include<iostream>
using namespace std;
class first
{
      public: float principle,rate,time,simple_interest;
       first()
        {
      	cout<<"Enter the value of principle rate and time ";
       	cin>>principle>>rate>>time;
		}
		void display()
		{
		simple_interest=(principle*rate*time)/100;
		cout<<"The value of the simple interest is "<<simple_interest;	
			
		}
	
	
};
int main()
{ 
	
	first obj;
	obj.display();
	
	
	
}
