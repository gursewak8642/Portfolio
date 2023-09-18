//pattern to print
//12345
//1234
//123
//12
//1
#include<stdio.h>
#include<conio.h>
int main(){
	
	int r,c,row;
	printf("Enter the value of row :-");
	scanf("%d",&row);
	
	for(r=1;r<=row;r++)
	{
		for(c=1;c<=row;c++)
		{
		 printf("%d",r);
		 	
		}
		printf("\n");
		
	}
	
	return 0;
}
