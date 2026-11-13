#include <stdio.h>

#define SIZE 50




int main(void)
{
	int len , i;
	int arr[SIZE] , re_arr[SIZE];
	printf("Enter the numbers of elements : ");
	scanf("%i",&len);
	if(len<0 || len>SIZE)
	{
		printf("Number of elements must be between 0 and %i\n",SIZE);
		return 1;
	}
	
	for(i=0 ; i<len ;i++)
	{
		printf("%i .Enter number: ",i+1);
		scanf("%i",&arr[i]);
		re_arr[len-(i+1)] = arr[i];
	}

	printf("Reverse Array is : ");
	for(i=0 ; i<len ;i++)
	{
		printf("%i ",re_arr[i]);
	}
	
	return 0;
}
