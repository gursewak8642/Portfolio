#include<stdio.h>
int main()
{
	char ch;
	int num;
	  printf("\n Enter the int and a char value:");
	 // Check the return value of scanf 
   	 if(scanf("%d %c", &num, &ch)==2)
       printf("\n Data read sucessfully");
     else
	   printf("\n Error in Data input");
	   
	    return 0;
		  



}     
