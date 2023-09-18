//code 9 of page no.62 f the reema thareja book
#include<stdio.h>
#include<conio.h>
int main(){
	
	char ch;
	float sal,bonus,amount_to_be_paid;
	 printf("Enter the sex of the employee (m or f ):");
	 scanf("%c", &ch);
	 printf("\n Enter the salary of the employee:");
	 scanf("%f",&sal);
	if(ch=='m')
	 bonus = 0.05*sal;
	else
	 bonus = 0.10*sal;
	 if(sal<10000)
	   bonus += 0.02*sal;
	amount_to_be_paid = sal+bonus;
	 printf("\n Salaray = %f",sal);
	 printf("\n bonus = %f",bonus);
	 printf("\n _______________________________");
	 printf("\n amount to be paid to an employee = %f ", amount_to_be_paid  );
	 printf("\n _______________________________");   
	return 0;
	 
}
