#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        double t1, t2, r1, r2;
        cin >> t1 >> t2 >> r1 >> r2;
        
        double t = (pow(t1,2) / pow(r1,3));
        double r = (pow(t2,2) / pow(r2,3));
        
        if (t == r){
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}