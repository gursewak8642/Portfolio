#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,x;
        cin>>a>>b>>x;
        int bal= b-a;
        int ans= bal/x;
        cout<<ans<<endl;

    }
    return 0;
}