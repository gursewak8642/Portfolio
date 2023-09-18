// Write a program to find the greatest of three numbers
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,big=0;
	 printf("\n Enter the first number:-");
	 scanf("%d",&a);
	 printf("\n Enter the second number:-");
	 scanf("%d",&b);
	 printf("\n Enter the third number:-");
	 scanf("%d",&c);
	if(a>b) 
	{if(a>c)
	  printf("\n %d is greater then %d and %d", a,b,c);
	 else
	  printf("\n %d is greater then %d and %d", c,a,b);
	  }
	else if(b>c)
	  printf("\n %d is greater then %d and %d",b,a,c );
	else
	  printf("\n %d is greater than %d and %d",c,a,b );
	    
	 return 0;  
}
