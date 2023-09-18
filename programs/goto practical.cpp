#include<stdio.h>
int main()
{ 
int i=10;
 do{

	int jump;
	printf("%d \n",i);
	i++;
	if(i>=21)
	{
 	goto jump;
	}
 }while(i<=20);
	jump:printf("Invalid character");
}
