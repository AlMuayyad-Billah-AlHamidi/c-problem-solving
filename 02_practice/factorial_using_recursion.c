#include <stdio.h>




unsigned int factorial(unsigned int number)
{
	if(number==0||number==1)
	{
		return 1;
	}
	
	else
	{
		return(number*factorial(number-1));
	}
	
}

int main(void)
{    
	
	unsigned int num,result;
	printf("Enter number :\n");
	scanf("%u",&num);
	
	result = factorial(num);
	printf("Factorial is : %u",result);
	
	return 0;
}
