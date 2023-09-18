// WAP to that accepts a number from 1 to 10 . 
//print whether number is even or odd using a switch case construct
#include<stdio.h>
#include<conio.h>
 int main(){
int num,rem;
     printf("Enter the number:-"); 
	 scanf("%d",&num);
	 //rem=num%2==0; //condition
	
	switch(rem=num%2==0){
	 case 1:printf("\n EVEN");
	 break;
	 case 2:printf("\n ODD");
}
	
//	if(rem==0)
//	 printf(" Even");
//	else
//	 printf("odd"); 
	
		
   	return 0;
}
