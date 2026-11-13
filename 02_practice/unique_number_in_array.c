#include <stdio.h>

#define SIZE 50



int main(void)
{
	int len , i;
	int arr[SIZE];
	printf("Enter the numbers of elements : ");
	scanf("%i",&len);
	if(len<0 || len>SIZE)
	{
		printf("Number of elements must be between 0 and %i\n",SIZE);
		return 1;
	}
	
	//Scanning numbers
	for(i=0 ; i<len ;i++)
	{
		printf("%i .Enter an element: ",i+1);
		scanf("%i",&arr[i]);
	}
	
	//Verify unique (count how many times each element appears in the whole array)
	printf("\nThe unrepeated element is: ");
	for(i=0 ; i<len ; i++)
	{
		int count=0;
		for(int j=0 ; j<len ; j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
			}
		}
		if(count==1)
		{
			printf("%i ",arr[i]);
		}
	}
	
	return 0;
}
