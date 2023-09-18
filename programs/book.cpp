#include <bits/stdc++.h>
using namespace std;
// // Write a program to find the largest of three using ternary operator
// int main(){
//   int a,b,c;
//   cin>>a>>b>>c;
//   int large;
//   large = a>b?(a>c?a:c):(b>c?b:c);
//   cout<<large;
//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------------

// // Shift operator
// int main(){
//    double n,m;
//    n=22;
// //    m = n<<2;
//       n=n>>1;
// //    cout<<n<<endl<<m<<endl;
//    cout<<n;
//     return 0;
// }

// ----------------------------------------------------------------------------------------------------------------------------

// Write a program to find area and volume of circle
// int main()
// {
//     float area, circumference, r ;
//     const float pi = 3.14;
//     cin>>r;
//     area = pi*r*r;
//     circumference = 2*pi*r;
//     cout<<"circumference of circle is "<<circumference<<endl;
//     cout<<"Area of circle is " <<area<<endl;
//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------------

// //Write a program to convert the upper to lower and lower to upper
// int main()
// {
//      char upper_ch;
//      cout<<"Enter any Upper case alphabet"<<endl;
//      cin>>upper_ch;
//      upper_ch=upper_ch+32;
//      cout<<"Upper case converted into the lower case is :- "<<upper_ch<<endl ;
//       char lower_ch;
//       cout<<"Enter any Lower case aphabet"<<endl;
//       cin>>lower_ch;
//       lower_ch=lower_ch-32;
//       cout<<"Lower case converted into the upper case is :- "<<lower_ch<<endl;
//       return 0;
// }

// ----------------------------------------------------------------------------------------------------------------------------------

// // write a program to swap two numbers using temp variable
// int main(){
//     int num1,num2,temp;
//     cin>>num1>>num2;
//     cout<<"Before swaping "<<num1<<"\t"<<num2<<endl;
//     temp=num1;
//     num1=num2;
//     num2=temp;
//     cout<<"After  swaping "<<num1<<"\t"<<num2<<endl;
//     return 0;
// }

// ----------------------------------------------------------------------------------------------------------------------------------

// // write a program to calculate the bill amount for an item giving its quantity sold,value,discount, and tax.
// int main()
// {
//     float no_of_items, value_of_items, discount_percentage, tax;
//     cout << "Enter the number of items sold " << endl;
//     cin >> no_of_items;
//     cout << "Enter the value of items " << endl;
//     cin >> value_of_items;
//     cout << "Enter the discount percentage" << endl;
//     cin >> discount_percentage;
//     cout << "Enter the tax" << endl;
//     cin >> tax;
//     float amount, discount_amt, sub_total, tax_amt, total_amt;
//     amount = no_of_items * value_of_items;
//     discount_amt = (amount * discount_percentage) / 100.0;
//     sub_total = amount - discount_amt;
//     tax_amt = (sub_total * tax) / 100.00;
//     total_amt = sub_total + tax_amt;
//     cout << "*******************************" << endl;
//     cout << "           Bill            " << endl;
//     cout << endl
//          << "No. of items sold    " << no_of_items;
//     cout << endl
//          << "Price per item       " << value_of_items;
//     cout << endl
//          << "----------------------------------";
//     cout << endl
//          << "Amount               " << amount;
//     cout << endl
//          << "Discount             " << discount_amt;
//     cout << endl
//          << "Discounted total     " << sub_total;
//     cout << endl
//          << "Tax total            " << tax_amt;
//     cout << endl
//          << "--------------------------------------";
//     cout << endl
//          << "Total Amount to pay  " << discount_amt;
//     // cout<6284227721
//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------------

// // write a program to convert any character into upper case and the lower case.
// int main(){
//     char ch;
//     cout<<"Enter any charachter ";
//     cin>>ch;
//     if(ch>='A' && ch<='Z'){
//     cout<<"The entered character is in upper case ";
//     ch=ch+32;
//     cout<<"In lower case it is "<<ch;
//     }
//     else{
//         cout<<"The entered case is in lower case ";
//         ch=ch-32;
//         cout<<"In upper case it is "<<ch;
//     }
//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------

// // write a program to check the character is vowel or not
// int main(){
//     char ch;
//     cin>>ch;
//     if (ch=='a' || ch=='e'||ch=='i'||ch=='o'||ch=='u')
//     {
//         cout<<"Given character "<<ch<<" is a vowel character ";
//     }
//     else{
//         cout<<"Given character "<<ch<<" is not a vowel character";
//     }
//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------

// // write a program to find the year is leap is not
// int main(){
//     int n;
//     cin>>n;
//     if ((n%4==0)&&((n%100!=0)||(n%400==0)))
//     {
//         cout<<"year is a leap year"<<endl;
//     }
//     else
//     cout<<"year is not a leap year"<<endl;
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------------------------------------

// /* A company is decided to give the bonus to the workers. A 5% bonus on salary is given to the mail workers and 10% bonus is given to the female workers. Write a program to enter the salary and the sex of the employee. If the salary is less than 10,000 then the employee gets extra 2%bonus on the salary. Calculate the bonus.*/
// int main(){
//     char ch;
//     float sal, bonus, amt_to_be_paid;
//     cout<<"Enter the sex of the mail "<<endl;
//     cin>>ch;
//     cout<<"Enter the salary of the employee "<<endl;
//     cin>>sal;
//     if (ch=='m')
//     {
//         bonus=0.05*sal;
//     }
//     else
//         bonus=0.10*sal;
//     if (sal<10000)
//     {
//         bonus+=0.02*sal;
//     }
//     amt_to_be_paid=sal+bonus;
//     cout<<"Salary =  "<<sal<<endl;
//     cout<<"Bonus  =  "<<bonus<<endl;
//     cout<<"Total amt "<<amt_to_be_paid<<endl;
//     return 0;
// }

//-----------------------------------------------------------------------------------------------------------------------------------

// //Write a program to print the following pattern
// /*
// Pass 1 -  1 2 3 4 5
// Pass 2 -  1 2 3 4 5
// Pass 3 -  1 2 3 4 5
// Pass 4 -  1 2 3 4 5
// Pass 5 -  1 2 3 4 5
// */
// int main()
// {
//     int n;
//     for (int i = 1; i <= 5; i++)
//     {
//         cout <<endl<< "Pass " << i<<" - ";
//         for (int j = 1; j <= 5; j++)
//         {
//             cout <<" "<< j;
//         }
//     }
//     return 0;
// }

//---------------------------------------------------------------------------------------------------------------

// // write a program to print the following pattern
// /*
// ******
// ******
// ******
// ******
// ******
// */
// int main()
// {
//    int i,j;
//    for ( i = 1; i <= 5; i++)
//    {
//        for ( j = 0; j <=5; j++)
//        {
//            cout<<"*";
//        }
//        cout<<endl;
//    }
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------------------------------------

// // //Write a program to print the following pattern
// // *
// // **
// // ***
// // ****
// // *****
// int main(){
//     int i,j;
//     for ( i = 1; i <=5; i++)
//     {
//         cout<<"\n";
//         for ( j = 1; j <=i; j++)
//         {
//             cout<<"*";
//         }
//     }
//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------

// // Write a program to print the following pattern
// // 1
// // 12
// // 123
// // 1234
// // 12345
// int main(){
//     int i,j;
//     for ( i = 1; i <=5; i++)
//     {
//       for ( j = 1; j <=i; j++)
//       {
//           cout<<j;
//       }
//       cout<<endl;
//     }
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------

// //Write a program to print the following pattern
// // 1
// // 22
// // 333
// // 4444
// // 55555
// int main()
// {
//     int i, j;
//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             cout << i;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------

// // Write a program to print the following pattern
// // 1       1
// // 2       12      2
// // 3       13      23      3
// // 4       14      24      34      4
// // 5       15      25      35      45      5
// int main(){
//     int i,j;
//     for ( i = 1; i <=5; i++)
//     {
//         for ( j = 1; j <=i; j++)
//         {
//             cout<<i<<"\t"<<j;
//         }
//         cout<<endl;
//     }
// }

// ------------------------------------------------------------------------------------------------------------

// // Write a program to print the following pattern
// // 0
// // 1       2
// // 3       4       5
// // 6       7       8       9
// // 10      11      12      13      14
// int main(){
//     int i,j,n=0;
//     for ( i = 0; i <5; i++)
//     {
//         for ( j = 0; j <=i; j++)
//         {
//             cout<<n<<"\t";
//             n++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------

// // Write a program to print the following pattern
// // A
// // AB
// // ABC
// // ABCD
// // ABCDE
// // ABCDEF
// int main(){
//     char i,j;
//     for ( i = 65; i <=70; i++)
//     {
//         for ( j = 65; j <= i; j++)
//         {
//             cout<<j;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------

// // Write a program to print the following pattern
// //      1
// //     12
// //    123
// //   1234
// //  12345
// int main()
// {
//     int i, j, k, n = 5;
//     for (i = 1; i <= n; i++)
//     {
//         for (k = n; k >= i; k--)
//         {
//             cout << " ";
//         }
//         for (j = 1; j <= i; j++)
//         {
//             cout << j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------

// // write a program to print the sizes of data types
// #include <iostream>
// using namespace std;
// int main()
// {
//     cout << "Size of char : " << sizeof(char)
//          << " byte" << endl;
//     cout << "Size of int : " << sizeof(int)
//          << " bytes" << endl;
//     cout << "Size of short int : " << sizeof(short int)
//          << " bytes" << endl;
//     cout << "Size of long int : " << sizeof(long int)
//          << " bytes" << endl;
//     cout << "Size of signed long int : " << sizeof(signed long int)
//          << " bytes" << endl;
//     cout << "Size of unsigned long int : " << sizeof(unsigned long int)
//          << " bytes" << endl;
//     cout << "Size of float : " << sizeof(float)
//          << " bytes" << endl;
//     cout << "Size of double : " << sizeof(double)
//          << " bytes" << endl;
//     cout << "Size of wchar_t : " << sizeof(wchar_t)
//          << " bytes" << endl;
//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------

// 
// #include</stdc++.h>
// // using namespace std;
// class base{
//     int val1,val2;
//     public: 
//      void get()
//      {
//          cout<<"Enter two values"<<endl;
//          cin>>val1>>val2;
//      }
//      friend float mean (base ob);
// };
// float mean(base ob){
//     return float (ob.val1 +ob.val2)/2; 
// }
// int main(){
//     base obj;
//     obj.get();
//     cout<<endl<<"Mean value is :"<<mean(obj);
//     return 0;

// }

