#include <stdio.h>
#include <math.h>


int main(void)
{
	double n , res;
	printf("Enter a Number: ");
	scanf("%lf",&n);
	if(n<0)
	{
		printf("Error: square root of a negative number is not real");
		return 1;
	}
	res = sqrt(n);
	printf("Square root of %.4lf = %.4lf",n,res);
	
	return 0;
}
