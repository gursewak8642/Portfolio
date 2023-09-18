// write a program to to input three numbers and then find the largest of them using && operator
#include<stdio.h>
#include<conio.h>
int main()
{
	int num1,num2,num3;
	printf("\n Enter the first number:-");
	scanf("%d",&num1);
	printf("\n Enter the second number:-");
	scanf("%d",&num2);
	printf("\n Enter the third  number:-");
	scanf("%d",&num3);
	
	
	if(num1>num2 && num1>num3)
	 printf("\n %d is largest number",num1);
	else if(num2>num1 && num2>num3)
	 printf("\n %d is largest number",num2);
	else
	 printf("\n %d is largest number",num3);
	return 0; 
 } 
