//student marks 
#include<iostream>
using namespace std;
class student
{
	int marks;
	float percentage;
	

  public: void getdata()
  {   
      cout<<"Enter the marks of the student ";
      cin>>marks;
  }
      void display()
      {
	  percentage=marks*100/500;
	  cout<<"percentage="<<percentage;
      }
};
int main()
{
	student a;
	a.getdata();
	a.display();
	
	
}
