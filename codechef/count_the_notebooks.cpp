#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int num_of_pages=n*1000;
        int num_of_copies=num_of_pages/100;
        cout<<num_of_copies<<endl;
    }
    return 0;
}