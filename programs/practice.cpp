// #include <bits/stdc++.h>
// using namespace std;
// int power(int n)
// {
//     if (n == 0)
//         return 1;

//     return 2 * power(n - 1);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int ans = power(n);
//     cout << ans << endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
void reachHome(int src, int dest){
    cout<<"source-> "<<src<<" destination-> "<<dest<<endl;
    if(src==dest)
    return;
    src++;
    reachHome(src,dest);
}
int main(){
    int dest=10, src=1;
    cout<<endl;
    reachHome(src,dest);
    cout<<"BaBBar bhaiya ke paas pahunch gya "<<endl;
}