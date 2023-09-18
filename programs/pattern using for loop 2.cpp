//pattern to print
//1
//22
//333
//4444
//55555

#include<stdio.h>
#include<conio.h>
int main()
{
	int r,c,row;
	printf("Enter the value of row :-");
	scanf("%d",&row);
	for(r=1;r<=row;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf("%d",r);
		}
		printf("\n");
	}
}
