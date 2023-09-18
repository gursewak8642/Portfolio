// linear search in array
#include <stdio.h>
#include <conio.h>
int main()
{
	int arr[10], n, c, search, found = 0;

	printf("Enter the number of elements:-\n");
	scanf("%d", &n);

	printf("Enter the elements of the array\n");
	for (c = 0; c < n; c++)
	{
		scanf("%d", &arr[c]);
	}
	printf("Enter the search elemenrts of the array:-");
	scanf("%d", &search);

	for (c = 0; c < n; c++)
	{
		if (arr[c] == search)
		{
			found = 1;
			c++;
			printf("position %d ", c);

			break;
		}
	}
	if (found == 0)
		printf("search element not found");
}
