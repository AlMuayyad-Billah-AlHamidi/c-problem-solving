#include <stdio.h>

int main(void)
{                     
	int colum ,row  ,i ,j;
	
	printf("Enter size of array :\n");
	scanf("%i %i",&row ,&colum);
	if(row<=0 || colum<=0)
	{
		printf("Size must be positive\n");
		return 1;
	}
	
	//Declaration
	float arr[row][colum] , arr_t[colum][row];
	
	
	//Scaning matrix
	printf("Enter elements of array :\n");
	for(i=0 ; i<row  ; i++)
	{
		for(j=0 ; j<colum  ;j++)
		{
			scanf("%f",&arr[i][j]);
		}
	}
	
	
	//Printing matrix
	printf("\n******************\n");
	for(i=0 ; i<row ; i++)
	{
		for(j=0 ; j<colum ;j++)
		{
			printf("%0.2f ",arr[i][j]);
		}
			printf("\n");                    
	}
	
	
	//Init the transpose of matrix
	for(i=0 ; i<row ; i++)
	{
		for(j=0 ; j<colum ;j++)
		{
			arr_t[j][i] = arr[i][j];
			
		}
			
	}
	
	
	//printing the transpose of matrix
	printf("\n******************\n");
	for(i=0 ; i<colum ; i++)
	{
		for(j=0 ; j<row ;j++)
		{
	
			printf("%0.2f ",arr_t[i][j]);
		}
		printf("\n");	
	}
	
	return 0;
}
