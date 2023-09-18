/*WAP usind a do while loop to display the square and 
cube of the first n natural numbers*/
#include<stdio.h>
#include<conio.h>
int main(){
	int i,n;
	printf(" \n Enter the value of n:");
	scanf("%d",&n);
	printf(" \n  ______________________");
	i=1;
	do{
		printf("\n | \t %d  \t | \t %d \t | \t %d \t | ", i,i*i,i*i*i);
		i++;
		
	}while(i<=n);
	printf("___________________________");
	
	
	return 0;
}
