#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        double ans = pow((0.143*n),n);
        int a= ans;
        if(ans-a<0.5)
        cout<<a<<endl;
        else
        cout<<a+1<<endl;
    }
    return 0;
    
}