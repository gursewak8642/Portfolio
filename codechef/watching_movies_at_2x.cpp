#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int less_time= y/2;
    int left_min=x-y;
    int total_min=left_min+less_time;
    cout<<total_min;
    
}