/////**
////
////* C program to print the sum of all odd numbers from 1 to n
////
////*/
////
////
////
////#include <stdio.h>
////
////
////
////int main()
////
////{
////
////int i, n, sum=0;
////
////
////
/////* Input range to find sum of odd numbers */
////
////printf("Enter upper limit: ");
////
////scanf("%d", &n);
////
////
////
/////* Find the sum of all odd number */
////
////for(i=1; i<=n; i+=2)
////
////{
////
////sum += i;
////
////}
////
////
////
////printf("Sum of odd numbers = %d", sum);
////
////
////
////return 0;
////
////}
//
//
//#include <stdio.h>
//
//
//
//int main()
//
//{
//
//int i, num, sum = 0;
//
//
//
///* Input a number from user */
//
//printf("Enter any number to check perfect number: ");
//
//scanf("%d", &num);
//
//
//
///* Calculate sum of all proper divisors */
//
//for(i = 1; i <= num / 2; i++)
//
//{
//
///* If i is a divisor of num */
//
//if(num%i == 0)
//
//{
//
//sum += i;
//
//}
//
//}
//
//
//
///* Check whether the sum of proper divisors is equal to num */
//
//if(sum == num)
//
//{
//
//printf("%d is PERFECT NUMBER", num);
//
//}
//
//else
//
//{
//
//printf("%d is NOT PERFECT NUMBER", num);
//
//}
//
//
//
//return 0;
//
//}
#include<stdio.h>
#include <conio.h>

 

 int main()

{

  int a[10000],b[10000],i,n,j,k,temp,c=0;

  

//  printf("Enter size of the array :");
    printf("Enter the size of an array:");
  scanf("%d", &n);

  printf("Enter elements in array : ");

  for(i=0; i<n; i++)

  {

    scanf("%d",&a[i]);

    if(a[i]%2==1)

     c++;

  }

  for(i=0; i<n-1; i++)

  {

      for(j=0; j<n-i-1; j++)

    {

      if(a[j]>a[j+1])

      {

      temp=a[j];

      a[j]=a[j+1];

      a[j+1]=temp;

  }

 

    }

    

  }  



k=0;

  j=n-c;

  for(i=0; i<n; i++)

  {

    if(a[i]%2==0)

    {

    if(k<n-c)

     b[k++]=a[i];

}  

else

{

if(j<n)

     b[j++]=a[i];

  }

  }

   

  printf("\narray after sorting even and odd elements separately:\n ");

 

  for(i=0; i<n; i++)

  {

  a[i]=b[i];

    printf("%d ",a[i]);

  }

   

   

 }

