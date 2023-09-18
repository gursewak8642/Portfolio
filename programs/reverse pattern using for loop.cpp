//pattern to print
//55555
//4444
//333
//22
//1
//
//
#include<stdio.h>
#include<conio.h>
int main(){
	
	int r,c,row;
	printf("Enter the value :-");
	scanf("%d",&row );
	
	for(r=5;r<=row;r--)
	{
		for(c=5;c<=r;c--)
		{
			printf("%d",c);
			
		}
		printf("\n");
	}
	
	
}
