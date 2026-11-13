#include <stdio.h>
#define SIZE 50

void Swap_Array(int arr1[] , int arr2[] , int len1 , int len2);

int main(void)

{
	int arr1[SIZE] , arr2[SIZE] , len1 , len2 , i;
	
	printf("Enter number of elements for 1st array: ");
	scanf("%i",&len1);
	if(len1<0 || len1>SIZE)
	{
		printf("Number of elements must be between 0 and %i\n",SIZE);
		return 1;
	}
	printf("Enter the elements: \n");
	for(i=0 ; i<len1 ;i++)
	{
		scanf("%i",&arr1[i]);
	}
	printf("\n");
	
	printf("Enter number of elements for 2st array: ");
	scanf("%i",&len2);
	if(len2<0 || len2>SIZE)
	{
		printf("Number of elements must be between 0 and %i\n",SIZE);
		return 1;
	}
	printf("Enter the elements: \n");
	for(i=0 ; i<len2 ;i++)
	{
		scanf("%i",&arr2[i]);
	}
	printf("\n");
	
	Swap_Array(arr1 , arr2 , len1 , len2);

	return 0;
}




void Swap_Array(int arr1[] , int arr2[] , int len1 , int len2)
{
	int len;
	// only the first min(len1,len2) elements exist in both arrays
	if(len1<len2)
	{
		len=len1;
	}
	else
	{
		len=len2;
	}
	
	
	for(int i=0 ; i<len ;i++)
	{
		arr1[i] = arr1[i] ^ arr2[i];
		arr2[i] = arr1[i] ^ arr2[i];
		arr1[i] = arr1[i] ^ arr2[i];
	}
	
	printf("After swapping: \n");
	printf("1st Array is : ");
	for(int i=0 ; i<len1 ;i++)
	{
		printf("%i   ",arr1[i]);
	}
	printf("\n");
	
	printf("2st Array is : ");
	for(int i=0 ; i<len2 ;i++)
	{
		printf("%i   ",arr2[i]);
	}
	printf("\n");
}
