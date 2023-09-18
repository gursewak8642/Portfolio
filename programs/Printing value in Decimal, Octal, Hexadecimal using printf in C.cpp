/*Printing value in Decimal, Octal, Hexadecimal using printf in C.*/
 
#include <stdio.h>
 
int main()
{
    int value;
     printf("Enter the value:");
     scanf("%d",&value);
     
	 printf("Decimal value is: %d\n",value);
     printf("Octal value is: %o\n",value);
     printf("Hexadecimal value is (Alphabet in small letters): %x\n",value);
     printf("Hexadecimal value is (Alphabet in capital letters): %X\n",value);
     printf("\n Binary value is %b",value);
    return 0;   
}

