// write a program to enter the number and the calculate then sum of digits.


#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter a number:");
    scanf("%d",&a); 
    for(b=0;b==a;++b){
    	c+=b;
	}
	printf("%d",c);
	
	/*int num,temp, sumofdigits=0 ;
	printf("Enter the number:-");
	scanf("%d",&num);
	
	while(num!=0)
	{
		temp=num%10;
		sumofdigits += temp;
		num = num/10;
	}
	 printf("\n The sum of digits = %d", sumofdigits); */
	return 0;
	
}
