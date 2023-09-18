//WAP to demonstrate the use of switch statement without using break.... 
#include<stdio.h>
#include<conio.h>
int main(){
	int option;
	printf("Enter the value");
	scanf("%d",&option);
	switch(option){
	
	case 1:printf("\n case 1");
	case 2:printf("\n case 2");
	case 3:printf("\n case 3");
	default:printf("\n in case default");
}
	
	return 0;
}
