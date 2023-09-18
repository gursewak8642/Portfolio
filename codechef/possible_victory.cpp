#include<bits/stdc++.h>
using namespace std;
int main(){
    // r = scores of team a
    // c runs in over o
    int r,o,c;
    cin>>r>>o>>c;
    int total_overs=20-o;
    int total_runs=total_overs*6*6;
    // cout<<"total over left "<<total_overs;
    // cout<<endl<<"total runs "<<total_runs;
    //  cout<<endl;
    if(r<(c+total_runs))
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}