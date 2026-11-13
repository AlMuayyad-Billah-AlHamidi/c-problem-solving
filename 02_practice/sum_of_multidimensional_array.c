#include <stdio.h>

int main(void)
{
	int i,j;
	float arr1[2][2],arr2[2][2];
	
	printf("Enter the element of 1st matrix :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter a%i%i =",i+1,j+1);
			scanf("%f",&arr1[i][j]);
		}
		
	}
	
	printf("Enter the element of 2st matrix :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter b%i%i =",i+1,j+1);
			scanf("%f",&arr2[i][j]);                 
		}
		
	}
	
	printf("\n***************************\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("a%i%i + b%i%i = %f \n", i+1 , j+1 , i+1 , j+1 , arr1[i][j]+arr2[i][j]);
			
		}
		
	}
	
	return 0;
}
