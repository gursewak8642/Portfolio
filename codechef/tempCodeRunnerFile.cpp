#include<bits/stdc++.h>
using namespace std;
int main(){
    float x,y;
    cin>>x>>y;
    if(x%5==0)
    cout<<y-(x+0.50)<<endl;
    else
    cout<<y<<endl;
    return 0;
}