#include<stdio.h>

void read_bit(int num,int bit);


int main()
{		
	int a,b;
	printf("Enter a number : ");
	scanf("%i",&a);
	printf("Enter a bit you want read it : ");
	scanf("%i",&b);
	
	read_bit(a,b);
	
	return 0;
}


void read_bit(int num ,int bit)
{
	if(num & (1<<bit))
	{
		printf("The %ith LSB is : 1",bit);
	}
	else
	{
		printf("The %ith LSB is : 0",bit);
	}	
}





