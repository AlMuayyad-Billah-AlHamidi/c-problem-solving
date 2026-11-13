#include <stdio.h>

int main(void)
{
	int i ,fac=1;
	printf ("Enter an integer :\n");
	scanf ("%i",&i);
	
	
	if(i == 0 || i==1)
		printf ("Factorial is : 1");
	
	else if(i<0)
		printf ("Error!! no exist factorial for negative number ");
	
	else
	{
		while(i!=0)
		{
			fac*=i;
			i--;
		}
		printf ("Factorial is : %i",fac);
	}

	return 0;
}
