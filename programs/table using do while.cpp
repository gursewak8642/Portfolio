#include<stdio.h>
#include<conio.h>
int main(){
	int num,i=1;
	printf("Enter the number:- \n");
	scanf("%d",&num);
	do{
		printf("%d*%d=%d \n",num,i,num*i);
		i++;
	}while(i<=10);
}
