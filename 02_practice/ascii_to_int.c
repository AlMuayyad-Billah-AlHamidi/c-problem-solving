#include <stdio.h>
#include <stdlib.h>

#define SIZE 50




int main(void)
{
	int num;
	char string[SIZE];
	printf("Enter an array of numbers(0:9) : ");
	if(fgets(string,SIZE,stdin)==NULL)
	{
		return 1;
	}
	num = atoi(string);
	printf("\nYour integer is : %i",num);

	return 0;
}
