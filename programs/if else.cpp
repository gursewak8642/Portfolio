#include<stdio.h>
 int main(){
/*	int x=10;
	if(x>0)
	x++;
	printf("\n x=%d", x); */
	int age;
	printf("Enter the age");
	scanf("%d", &age);
	if(age>=18)
	  printf("\n You are eligible to vote");
	else
	  printf("\n You are not eligible");
	  
	
	return 0;
	
}
