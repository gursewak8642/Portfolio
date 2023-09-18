// practice problem pg 95 1st
#include<stdio.h>
#include<conio.h>
int main()
{ 
  int a=2,b=3,c=4;
  if(c!=100)
  a=10;
  else
  b=10;
  if(a+b>10)
  {
  c=12;
  b=20;
  b=++c; 
  } 
   printf("\n a=%d b=%d c=%d",a,b,c);	
	
}
