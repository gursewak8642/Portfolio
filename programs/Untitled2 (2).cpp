//student marks 
#include<iostream>
using namespace std;
class student
{
	int marks;
	int total;
	int sum=0;

  public: void getdata()
  {   
      cout<<"Enter the marks of the student ";
      for(int i=1;i<=5;i++)
	  {
      cin>>marks;
      sum=sum+1;
      }
  }
      void display()
      {
	  total=sum;
	  cout<<"total="<<total;
      }
};
int main()
{
	student a;
	a.getdata();
	a.display();
	
	
}
