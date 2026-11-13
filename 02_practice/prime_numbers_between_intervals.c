#include<stdio.h>

unsigned int check_prime(unsigned int num);


int main(void)
{
	unsigned int start,end,f;
	printf("Enter two numbers(intervals): \n");
	scanf("%u %u",&start,&end);
	
	printf("Prime : ");
	for(unsigned int num=start ; num<=end ;num++)
	{
		f = check_prime(num);
		
		if(f==1)
		{
			printf("%u ",num);
		}
	
	}
	
	return 0;
}






unsigned int check_prime(unsigned int num)
{
	unsigned int i,f=1;
	
	if(num<2)  // 0 and 1 are not prime
	{
		return 0;
	}
	
	for(i=2 ; i<=num/2 ; i++)
	{
		if(num%i==0)
		{
			f=0;
			break;
		}
	}

	return f;
	
}
