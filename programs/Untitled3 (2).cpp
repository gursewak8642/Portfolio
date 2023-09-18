//student marks 
#include<iostream>
using namespace std;
class student
{
	int marks[5];
	int total=0;
	int sum=0;

  public: student()
  {   
      cout<<"Enter the marks of the student ";
      for(int i=0;i<5;i++)
	  {
      cin>>marks[i];
      }
  }
      void display()
      {
	  for(int i=0;i<5;i++)
	  {
      total=marks[i]+total;
      }
	  cout<<"total="<<total;
      }
};
int main()
{
	student a;
	a.display();
	
	
}
