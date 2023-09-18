//no return type with Argument
#include<stdio.h>
#include<conio.h>
void add(int a,int b);
int main()
{
	
	int n1,n2;
	printf("Enter the value of n1,n2 :-->");
	scanf("%d %d",&n1,&n2);
		add(n1,n2);

	
}

void add (int a,int b)
{
	int sum;
	sum=a+b;
	printf("Sum=%d",sum);
	
}
