// write a program to test whether a number entered is positive negative or equal to zero
#include<stdio.h>
int main()
{
	
	int num;
	printf("\n Enter any number:");
	scanf( " %d ", &num);
	if(num==0)
	 printf("\n The number is equal to zero ");
	else if(num>0)
	 printf("\n The number is greater then zero");
	else
	  printf("\n The number is less zero");
	return 0;
	   
	
	
}
