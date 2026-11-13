#include <stdio.h>
#define SIZE 50


int main(void)
{    
	int size,i,loca;
	printf("Enter size of array :\n");
	scanf("%i",&size);
	if(size<0 || size>=SIZE)
	{
		printf("Size must be between 0 and %i\n",SIZE-1);
		return 1;
	}
	

	float arr[SIZE],element;
	
	
	printf("Enter elements of array :\n");
	for(i=0 ; i<size ;i++)
	{
		
		scanf("%f",&arr[i]);
		
	}
	
	printf("Enter the element to be inserted then its location :\n");
	scanf("%f %i",&element ,&loca);
	if(loca<1 || loca>size+1)
	{
		printf("Location must be between 1 and %i\n",size+1);
		return 1;
	}
	
	// shift the elements from the last one up to the location one step right
	for(i=size ; i>loca-1 ;i--)
	{
		arr[i]=arr[i-1];
		
	}
	
	arr[loca-1]=element;
	
	for(i=0 ; i<(size+1) ;i++)
	{
		
		printf("\n%0.1f ",arr[i]);
		
	}
	
	return 0;
}
