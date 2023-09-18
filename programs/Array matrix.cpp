#include<stdio.h>
int main()
{
	
	
	int matrix[3][3],r,c;
	for(r=0;r<3;r++)
	{
		
		for(c=0;c<3;c++)
		{
			printf("  \n Enter the value of matrix[%d][%d] ",r,c);
			scanf("%d",&matrix[r][c]);
			
		}
		
		
	}
for(r=0;r<3;r++)
	{
		
		for(c=0;c<3;c++)
		{
			printf(" %d \t ",matrix[r][c]);
			
			
		}
		printf("\n");
		
	}
	
}

