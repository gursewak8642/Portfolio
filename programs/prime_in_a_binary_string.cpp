#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        bool flag=0;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]=='1' && s[i+1]=='0' || s[i]=='1'&&s[i+1]=='1'){

            flag = 1;
            break;
            }
        }
        if(flag==1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;


    }
    return 0;
    
}