// swaping aand making ascending order using array


#include<stdio.h>
#include<conio.h>
int main() 
{  
   int i,j,n,a,number[30];
   printf("Enter the number of elements:-");
   scanf("%d",&n);
   
   printf("Enter the elements of an array \n");
   for(i=0;i<n;i++)
   {
   	scanf("%d",&number[i]);
   }
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{ 
		  if(number[i]>number[j])
		  {
		  	a=number[i];
		  	number[i]=number[j];
		  	number[j]=a;
		  }
		}
	}
	printf("Array elements are \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",number[i]);
	}
	
}
