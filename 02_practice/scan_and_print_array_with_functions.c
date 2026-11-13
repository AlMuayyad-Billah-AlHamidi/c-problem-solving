#include<stdio.h>
#define SIZE 5

void scan_array(int *array,int size_array)
{
	for(int i=0;i<size_array;i++)
	{
		scanf("%i",(array+i));
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
	int arr[SIZE]={0};
	scan_array(arr,SIZE);
	print_array(arr,SIZE);
	
	return 0;
}
