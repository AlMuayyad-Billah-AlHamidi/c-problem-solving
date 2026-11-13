#include <stdio.h>
int main(void)
{
	int i ;
	printf ("Enter an integer: ");
	scanf ("%i",&i);
	printf ("sum =%i",i*(i+1)/2);// the expression that calculates the sum of all integers from 1 to the user-inputted integer i.
	
	return 0;
}
