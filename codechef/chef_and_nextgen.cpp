#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        int t_energy=x*y;
        int t_energy_required=a*b;
        if(t_energy>=t_energy_required){
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
    return 0;
    
}