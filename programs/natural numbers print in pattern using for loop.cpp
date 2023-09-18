//pattern to print
//1
//2 3
//4 5 6
//7 8 9 10
//11 12 13 14 15
#include<stdio.h>
#include<conio.h>
int main()
{
	int r,c,row,n=15;
	printf("Enter the value of row:-");
	scanf("%d",&row);
	
	for(r=5;r>=1;r--)
	{
		for(c=1;c<=r;c++)
		{
			printf("%d ",n );
			n=n-1;
		}
		printf("\n");	
    }
}
