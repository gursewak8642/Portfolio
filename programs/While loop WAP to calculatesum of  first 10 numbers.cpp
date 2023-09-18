// WAP to calculate sum of  first ten numbers using while loop
#include<stdio.h>
#include<conio.h>
int main()
{
	int i=1, sum=0;

	 while(i<=10)
	{
		sum = sum+i;
		i=i+1;
	}
	printf("sum of first ten numbers is %d",sum);
	return 0;
}
