//With return type with arguments
#include<stdio.h>
#include<conio.h>
int add(int a,int b);
int main()
{
	
	int n1,n2,total;
	printf("Enter the value of n1,n2 :-->");
	scanf("%d %d",&n1,&n2);
	total=add(n1,n2);
	printf("sum=%d",total);
	
}

int add (int a,int b)
{
	int sum;
	sum=a+b;
	return sum;
	
}
