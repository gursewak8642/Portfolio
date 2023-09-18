//Pattern to print
//1
//12
//123
//1234
//12345


#include<stdio.h>
#include<conio.h>
int main(){
	
	int r,c,row;
	printf("Enter the value of row:-");
	scanf("%d",&row);
	for(r=1;r<=row;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf("%d",c);
		}
		printf("\n");
		
	}
}
