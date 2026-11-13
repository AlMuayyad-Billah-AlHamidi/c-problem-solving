//generating a random number in a given range.

#include<stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5
#define LOWER 25
#define UPPER 100


void assignmentrandval_array(int *array,int size_array)
{
	for(int i=0;i<size_array;i++)
	{
		array[i]=(rand()%(UPPER-LOWER+1))+LOWER; //giving random number in range(100-25)
		
	}
	printf(".................................................\n");
}


void print_array(int array[],int size_array)
{
	for(int i=0;i<size_array;i++)
	{
		printf("%i\n",*(array+i));
	}
}

int main(void)
{
	srand(time(0));  // Use current time as seed for random generator
	int arr[SIZE]={0};
	assignmentrandval_array(arr,SIZE);
	print_array(arr,SIZE);
	
	return 0;
}
