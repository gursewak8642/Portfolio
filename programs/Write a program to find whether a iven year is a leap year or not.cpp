// Write a program to find whether a given year is a leap year or not
#include<stdio.h>
#include<conio.h>

int main()
{ int year;
     printf("\n Enter any year");
	 scanf("%d",&year);
	 if((year%4==0)&&((year%100 !=0)||(year%400==0)))
	   printf("\n Leap Year");
	 else
	   printf("\n Not a leap year");
	  return 0;
	        
 } 
