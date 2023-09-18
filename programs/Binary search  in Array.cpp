// Binary Search
#include<stdio.h>
#include<conio.h>
int main(){
	
	int beg,end,arr[10],num,i,n,found=0,mid ;
	printf("Enter the number of elements \n");
	scanf("%d",&n);
	
	printf("Enter the elements in array \n ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the number to search \n");
	scanf("%d",&num);
	
	beg=0,end=n-1;
	while(beg<=end)
	{
		mid=(beg+end)/2;
		 if(arr[mid]==num)
		  {
		  	printf("%d is present in array at position = %d \n ",num,mid);
		  	found=1;
		  	break;
		  	}
		else if(arr[mid]>num)
		  end=mid-1;
		else
		  beg=mid+1;  
	}
	if(beg>end && found==0)
	printf("%d does not exist in the array \n");
	
}



