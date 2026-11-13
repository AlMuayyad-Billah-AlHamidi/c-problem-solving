#include <stdio.h>


int count_digit(int n)
{
	int counter=0;
	if(n==0)
	{
		return 1;
	}
	while(n!=0)
	{
		n/=10;
		++counter;
	}
	
	return counter;
}


int main(void)
{
	int n,d,r;
	printf("Enter a Number: ");
	scanf("%i",&n);
	d = count_digit(n);
	if(n<0)
	{
		printf("-");
		n=-n;
	}
	for(int i=0 ; i<d ;i++)
	{
		r = n%10;
		n/=10;
		printf("%d",r);
		
	}
	
	return 0;
}
