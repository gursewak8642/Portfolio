// Write a function to find number of vowels in the string 
#include<bits/stdc++.h>
using namespace std;
int  couunt_st(string s)
{
    int i=0;
    int ans=0;
    while (s[i]!='\0')
    {
        if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            ans++;

            i++;
        
    }
    return ans;
}
    

