#include <stdio.h>


int main(void)
{
	int len , i,*p=NULL;
	
	printf ("\n---------------------------------\n");
	printf ("Enter the numbers of elements(max 15) :");
	scanf("%i",&len);
	if(len<=0 || len>15)
	{
		printf("Number of elements must be between 1 and 15\n");
		return 1;
	}
	
	int arr[len];
	
	p=arr+(len-1);
	for(i=0 ; i<len ;i++)
	{
		printf("%i .Enter number: ",i+1);
		scanf("%i",&arr[i]);
		
	}
	
	printf ("---------------------------------\n");
	printf("Reverse of the array is : ");
	for(i=0 ; i<len ;i++)
	{
		printf("%i  ",*p);
		--p;
	}
	printf ("\n---------------------------------\n");
	
	return 0;
}
