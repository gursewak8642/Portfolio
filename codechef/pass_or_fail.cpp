#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,x,p;
        cin>>n>>x>>p;
        // n number of questions each of 3 marks
        // x questions correct and rest of them are incorrect
        // pass he need p marks
        int correct_marks = x*3;
        int incorrect_marks = n-x;
        int acc_marks = correct_marks-incorrect_marks;
        if(acc_marks<p)
        cout<<"FAIL"<<endl;
        else
        cout<<"PASS"<<endl;
    }
    return 0;
    
}