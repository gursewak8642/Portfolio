#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int fact=1;
    for (int  i = n; i >=1; i--)
    {
        fact=fact*i ;/* code */
    }
        cout<<"factorial is "<<fact<<endl;
       
}