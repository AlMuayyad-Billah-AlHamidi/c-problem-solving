#include <stdio.h>

// unsigned so negative numbers are counted by their two's complement bits
int count_ones(unsigned int num)
{
	int remainder,count=0;
	while(num!=0)
	{
		remainder=num%2;
		if(remainder==1)
		{
			++count;
		}
		num/=2;
	}
	return count;
}

int main(void)
{
	int num,s;
	printf("Enter a Number: ");
	scanf("%i",&num);
	s = count_ones(num);
	printf("Number of ones = %i",s);
	
	return 0;
}
