// #include <bits/stdc++.h>
// using namespace std;
// void fun1()
// {
//     cout << "fun1 " << endl;
// }
// void fun2()
// {
//     cout << "Before fun1 " << endl;
//     fun1();
//     cout << "After fun1 " << endl;
// }
// int main()
// {
//     cout << "Before fun2 " << endl;
//     fun2();
//     cout << "After fun2 " << endl;
//     return 0;
// }

// ------------INFINITE RECURSION LOOP----------------
// #include <bits/stdc++.h>
// using namespace std;
// void fun1()
// {
//     cout << "Gursewak Singh" << endl;
//     fun1();
// }
// int main()
// {
//     fun1();
//     return 0;
// }

//-----------Modified Recursion in Finite Loop--------
// #include<bits/stdc++.h>
// using namespace std;
// void fun1(int n){
//     if(n==0){
//         return;
//     }
//     cout<<"Gursewak Singh"<<endl;
//     fun1(n-1);
// }
// int main(){
//     fun1(2);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// void fun(int n){
//     if(n==0)
//     return;
//     cout<<"fuck off"<<endl;
//     fun(n-1);
//     cout<<" fuck off"<<endl;
// }
// int main(){
//      fun(3);
// }

// #include <bits/stdc++.h>
// using namespace std;
// void fun(int n)
// {
//     if (n == 0)
//         return;
//     fun(n - 1);
//     cout << n << endl;
//     fun(n - 1);
// }
// int main()
// {
//     fun(4);
// }

// ----Code to print the no from n to 1 using recursion----
//Time complexity of this code is theta(n)
// #include<bits/stdc++.h>
// using namespace std;
// void fun(int n){
//    if(n==0)
//    return;
//    cout<<n<<" ";
//    fun(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//      fun(n);
// }

//------Code to print the no from 1 to n using recursion------
//Time complexity of this code is theta(n)
// #include <bits/stdc++.h>
// using namespace std;
// void fun(int n)
// {
//     if (n == 0)
//         return;
//     fun(n - 1);
//     cout << n << " ";
// }
// int main()
// {
//     int n;
//     cin >> n;
//     fun(n);
// }