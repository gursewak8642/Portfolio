#include<stdio.h>
#include<conio.h>
int main(){
	
	int a1[2][2],b1[2][2],sum[2][2],r,c;
	printf("Enter the First  matrix");
	for(r=0;r<2;r++)
    {
    	for(c=0;c<2;c++)
    	{
    		scanf("%d",&a1[r][c]);
		}
	}	
	


	printf("Enter the Second matrix");
	for(r=0;r<2;r++)
    {
    	for(c=0;c<2;c++)
    	{
    		scanf("%d",&b1[r][c]);
		}
	}	
	
for(r=0;r<2;r++)
    {
    	for(c=0;c<2;c++)
    	{
    		
			sum[r][c]=a1[r][c]+b1[r][c];
			
		}
	}
		for(r=0;r<2;r++)
    {
    	for(c=0;c<2;c++)
    	{
    		printf("%d\t",b1[r][c]);
		}
		printf("\n");
	}	
}
