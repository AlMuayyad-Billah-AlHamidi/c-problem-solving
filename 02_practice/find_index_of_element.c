#include <stdio.h>


#define SIZE 50

void Search_Element(int arr[] , int num , int elem);

int main(void)
{
	int num ,i ,elem;
	int arr[SIZE];
	printf("Enter number of elements : ");
	scanf("%i",&num);
	if(num<0 || num>SIZE)
	{
		printf("Number of elements must be between 0 and %i\n",SIZE);
		return 1;
	}
	
	printf("Enter the elements : \n");
	for(i=0 ; i<num ; ++i)
	{
		scanf("%i",&arr[i]);
	}
	
	printf("Enter the element you want it  : ");
	scanf("%i",&elem);
	
	Search_Element(arr, num , elem);
	
	return 0;
}





void Search_Element(int arr[] ,int num , int elem)
{
	int found=0;
	for(int i=0 ; i<num ;i++)
	{
		if (arr[i]==elem)
		{
			found = 1;
			printf("Number found at the location : %i\n",i);
		}
	}
	
    if(!found)
	{
		printf("Sorry number not found : ");
	}
}
