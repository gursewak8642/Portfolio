// Write a program to enter the charater ad then determine whether it is vowel or not
#include<stdio.h>
int main(){
	char ch;
	printf("Enter any character:");
	scanf("%c", &ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	   printf("\n %c is an vowel character",ch);
	else
	   printf("\n %c is not an vowel Character ",ch);
	return 0;     
}
