// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b,c;
//     int *p1,*p2,*p3;
//     cout<<"enter the three number"<<endl;
//     cin>>a>>b>>c;
//     p1=&a;
//     p2=&b;
//     p3=&c;
    
//     if(*p1>=*p2  && *p1>=*p3 )
//     {
//         cout<<" greater is p1: "<<*p1<<endl;
//     }
//      if(*p2>=*p1  && *p2>=*p3 )
//     {
//         cout<<" greater is p2: "<<*p2<<endl;
//     }
//      if(*p3>=*p1  && *p3>=*p2 )
//     {
//         cout<<" greater is p3: "<<*p3<<endl;
//     }
    

//     if(*p1<=*p2  && *p1<=*p3 )
//     {
//         cout<<" smallest is p1: "<<*p1<<endl;
//     }
//      if(*p2<=*p1  && *p2<=*p3 )
//     {
//         cout<<" smallest is p2: "<<*p2<<endl;
//     }
//      if(*p3<=*p1  && *p3<=*p2 )
//     {
//         cout<<" smallest is p3: "<<*p3<<endl;
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
     int a[8],i,s=0,g,l;
     float avg;
     printf("Enter 8 Numbers:\n");
     for(i=0;i<8;i++)
     {
          scanf("%d",&a[i]);
          s=s+a[i];
          avg=s/8.0;
     }
     printf("Sum of Array Elements = %d\n",s);
     printf("Average of Elements   = %.2f\n",avg);
     g=a[0];
     for(i=0;i<8;i++)
          if(a[i]>g)
               g=a[i];
     printf("Greatest Element      = %d\n",g);
     l=a[0];
     for(i=0;i<8;i++)
          if(a[i]<l)
               l=a[i];
     printf("Lowest Element        = %d",l);
     return 0;
}