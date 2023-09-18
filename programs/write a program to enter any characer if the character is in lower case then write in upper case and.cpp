/*write a program to enter any characer if the character is in lower case then write in upper case and
 if the character is in lower case then write in upper case*/
 #include<stdio.h>
 #include<conio.h>
 int main(){
 	  char ch;
 	   printf("\n Enter any characer:");
 	   scanf("%c", &ch);
	  if(ch>='A'&&ch<='Z')
	   printf("\n The entered character was in upper case . In lower case it is :%c", (ch+32));
	  else
	   printf("\n The entered character was in lower case . In upper case it is %c ", (ch-32));
	  return 0;
	   
	 
 }

