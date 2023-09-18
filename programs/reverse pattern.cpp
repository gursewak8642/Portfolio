#include<stdio.h>
#include<conio.h>
int main()
{
	int r,c,row=5;
	for(r=row;r>=1;r--){
		for(c=1;c<=r;c++){
			printf("*");
		}
		
		printf("\n");
	}
	
}
