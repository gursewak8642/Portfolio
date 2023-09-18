#include <stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int number, sum=0; 
      printf("Enter limit:--> ");
      scanf("%d", &number);
      printf("Perfect Numbers are %d to %d are --> ", 1,number);
    for( int p=1; p<=number; p++)
    {
         sum = 0;    
  	     for(int q=1; q<p; q++)
         {
            if(p % q == 0)
            {
                sum+= q;
            }
        }
        if(sum == p)
        {
          printf("%d, ", p);
        }
    }
    return 0;
}
