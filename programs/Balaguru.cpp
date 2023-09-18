#include<iostream>
using namespace std;
//const m=50;
class ITEMS
{
	int itemcode[50];
	float itemPrice[50];
	int count;
	public:
    void CNT(void){count=0;}
    void getitem();
    void displaySum();
    void remove();
    void displayitems();
};

void ITEMS::getitem()
{
	cout<<"Enter item code :";
	cin>>itemcode[count];
	cout<<"Enter item cost :";
	cin>>itemPrice[count];
	count++;
}
void ITEMS::displaySum()
{
	float sum=0;
	 for(int i=0;i<count;i++)
	 {
		sum=sum+itemPrice[i];
		cout<<"\nTotal value :"<<sum<<endl;
	 }
}
void ITEMS::remove()
{
	int a;
	cout<<"Enter item code :";
	cin>>a;
	
	for(int i=0;i<count;i++)
	{
		if(itemcode[i]==a)
		itemPrice[i=0];
	}
}
void ITEMS::displayitems()
{
	cout<<"\nCode price\n";
	for(int i=0;i<count;i++)
    { 
	cout<<"\n"<<itemcode[i];
    cout<<" "<<itemPrice[i];
 	}
	 cout<<"\n";	
}

int main()
{
	ITEMS order;
	order.CNT();
	int x;
	do{
		cout<<"\nYou can do the following ";
		cout<<"\nEnter appropriate number ";
		cout<<"\n1:Add an item";
		cout<<"\n2:Display Total value ";
		cout<<"\n3:Delete an item ";
		cout<<"\n4:Display all items ";
		cout<<"\n5:Quit "; 
		cout<<"\n \n What is your option ? ";
		
		cin>>x;
		switch(x)
		{
		case 1:order.getitem();
		break;
		case 2 :order.displaySum();
		break;
		case 3 :order.remove();
		break;
		case 4 :order.displayitems();
		break;
		case 5 :break;
		default:cout<<"Error an input";
		
			}    
	}while(x!=5);
}
