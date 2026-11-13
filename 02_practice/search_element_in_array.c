#include<stdio.h>

#define SIZE 5



void findElement_array(char array[],int size_array,char needed_element)
{
	
	for(int i=0;i<size_array;i++)
	{
		if(needed_element==array[i]) 
		{
			printf("\n%i",i);
		}
	}
	
	
}




int main(void)
{
	char  arr[SIZE]={'1','2','3','4','5'};
	char element;
	scanf(" %c",&element);
	findElement_array(arr,SIZE,element);
	
	return 0;
}
