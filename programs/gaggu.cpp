


#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
char str1[30],str2[30];



scanf("%[^\n]%*c",str1);
scanf("%[^\n]%*c",str2);

//puts(str1);


//printf("\nstr2 - %s",str2);

//int len = strlen(str2);
// printf("\nlen - %d ",len);

//   strncat(str1,str2,4);

//   puts(str1);

// char ch[5]="hello";

// printf("\nsizeof %d, len %d ",sizeof(ch),strlen(ch));

//   printf("\nrev - %s",strrev(str1));


   // str compare

  printf("\nstr compare  %d ",  strcmp(str1,str2));
    // 0   -  both are equal
    // str1>str2  - +ve value
    // str1<str2  -  -ve value
    if(strcmp(str1,str2)==0)
    {
     printf("Both the strings are equal");
    }

    else{
     printf(" strings are not equal");
    }


















return 0;
}

