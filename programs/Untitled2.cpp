#include<stdio.h>
int main()
{
	int num,i,j;
	printf("Enter the number ");
	scanf("%d",&num);
for(i=num; i<=num;i++)
{
 for(j=1; j<i; j++)
  {
   if(i % j == 0)
   {
    printf("The  perfect  number is %d\n, ", i);
   }
  
  }
   else if(i%j==1)
    printf("The numberis not perfect are %d\n, ", i);

}
}
