//Matrix

#include<stdio.h>
#include<conio.h>
int main(){
	
	int a[2][2],b[2][2],mul[2][2],r,c,m;
	printf("Enter the First  matrix");
	for(r=0;r<2;r++)
    {
    	for(c=0;c<2;c++)
    	{
    		scanf("%d",&a[r][c]);
		}
	}	
	


	printf("Enter the Second matrix");
	for(r=0;r<2;r++)
    {
    	for(c=0;c<2;c++)
    	{
    		scanf("%d",&b[r][c]);
		}
	}	
	
		for(r=0;r<2;r++)
    {
    	for(c=0;c<2;c++)
    	{
    		mul[r][c]=0;
    		for(m=0;m<2;m++)
    		 {
    		 	mul[r][c]+=a[r][m]*b[m][c];
			 }
		}
	}
	for(r=0;r<2;r++)
    {
    	for(c=0;c<2;c++)
    	{
    		printf("%d\t",mul[r][c]);
		}
		printf("\n");
	}	
	
}
