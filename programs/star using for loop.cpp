#include<stdio.h>
#include<conio.h>
int main(){
	int r,c,row;
	 printf("Enter the value of row \n");
	 scanf("%d",&row);
	 for(r=1;r<=row;r++)
	 {
	 	for(c=1;c<=r;c++)
		 { 
		 printf("*");
		 }
		 printf("\n");
	 }
}
