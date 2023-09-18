//With return types no arguments 
#include<stdio.h>
#include<conio.h>
int add();
int main()
{
	
	int total;
	total=add();
	printf("sum=%d",total);
	
}

int add ()
{
	int a,b,sum;
	  printf("Enter the value of a and b  :-->");
    scanf("%d %d",&a,&b);
	sum=a+b;
	return sum;
	
}
