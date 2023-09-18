#include <bits/stdc++.h>
using namespace std;
vod merge(int arr[],int l,int m,int h){
    int n1=m-l+1;
    int n2=h-m;
    int L[n1],R[n2];
    for(int i=0;i<n1;i++){
        L[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++){
        R[i]=arr[m+i+1];
    
    }
    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2){
        if (/* condition */)
        {
            /* code */
        }
        
}
int main()
{
    int a[]={10,15,20,40,8,11,5];
    int low = 0;
    int mid = 3;
    int high = 6;
    merge(a, l, m, h);
    for (x : a)
        cout << x << " ";
    return 0;
}