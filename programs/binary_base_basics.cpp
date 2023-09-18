// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main()
// {
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n, k;
//         cin >> n >> k;
//         string s;
//         cin >> s;

//         bool moves = true;
//         ll another = n - 1;

//         for (int i = 0; i < n; i++)
//         {
//             if (s[i] == s[another])
//             {
//                 moves = true;
//                 another--;
//             }
//             else if (s[i] != s[another])
//             {
//                 if (k != 0)
//                 {
//                     if (s[i] == 0)
//                         s[i] = 1;
//                     else if (s[i] == 1)
//                     {
//                         s[i] = 0;
//                     }
//                     another--;
//                     k--;
//                 }
//                 else if (k == 0)
//                     moves = false;
//                 break;
//             }
//         }
//         cout << s << endl;
//         if (moves == 1)
//         {
//             cout << "YES" << endl;
//         }
//         else
//             cout << "NO" << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main()
// {
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n, k;
//         cin >> n >> k;
//         string s;
//         cin >> s;
//         ll low = 0;
//         ll high = n - 1;
//         bool moves = true;
//         while (low <= high)
//         {
//             if (s[low] == s[high])
//             {
//                 moves = true;
//                 low++;
//                 high--;
//             }
//             else if (s[low] != s[high])
//             {
//                 if (k != 0)
//                 {
//                     if (s[low] == 0)
//                         s[low] = 1;
//                     else if (s[low] == 1)
//                     {
//                         s[low] = 0;
//                     }
//                     low++;
//                     high--;
//                     k--;
//                 }
//                 else if (k == 0)
//                 {

//                     if (low != high)
//                     {

//                         moves = false;
//                         break;
//                     }
//                 }
//             }
//         }
//         if (moves == true)
//             cout << "YES" << endl;
//         else if (moves == false)
//             cout << "NO" << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, k;
//         cin >> n >> k;
//         string s;
//         cin>>s;
//         int count = 0;
//         int low = 0;
//         int high = n - 1;
//         while (low <= high)
//         {
//             if (s[low] == s[high])
//             {
//                 low++;
//                 high--;
//             }
//             else if (s[low] != s[high])
//             {
//                 count++;
//                 low++;
//                 high--;
//             }
//         }
//         if (count <= k)
//         {
//             cout << "Yes" << endl;
//         }
//         else
//             cout << "NO" << endl;
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, k;
//         cin >> n >> k;
//         string s;
//         cin >> s;
//         int p = 0;
//         for (int i = 0; i < n / 2; i++)
//         {
//             if (s[i] != s[n - i - 1])
//                 p++;
//         }
//         int sol = k - p;
//         if ((sol >= 0 && sol % 2 == 0) || (sol >= 0 && sol % 2 == 1))
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,i, count=0;
        cin>>n>>k;
        string s;
        cin>>s;
        for(i=0;i<n/2;i++){
            if(s[i]!=s[n-i-1]){
                count+=1;
            }
        }
        if(k>=count){
            if((k-count)%2==0){
                cout<<"YES"<<endl;
            }
            else if(n%2!=0){
                cout<<"YES"<<endl;
            }
            else
            cout<<"NO"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
}