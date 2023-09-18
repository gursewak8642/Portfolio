#include<stdio.h>

int main()

{

   char post1;

   char post2;

   int m,n,result;

   printf("Enter the postion of Sonu from top: ");

   scanf("%c",&post1);

    //The toupper() function is used to convert lowercase alphabet to uppercase.

   m=toupper(post1)-64;

   printf("Enter the postion of Sonu from bottom: ");

   scanf(" %c",&post2);

   n=toupper(post2)-64;

   result=m+n-1;

   printf("How many students are there in the class : %d ",result);

   return 0;   

}
