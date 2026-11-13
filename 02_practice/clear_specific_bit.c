#include<stdio.h>

int clear_bit(int num,int position);


int main()
{		
	int a,b;
	printf("Enter a number : ");
	scanf("%i",&a);
	printf("Bit Position : ");
	scanf("%i",&b);
	
	a = clear_bit(a,b);
	
	printf("result : %i",a);
	
	return 0;
}


int clear_bit(int num ,int position)
{
	num &=~(1<<position);
	return num;
}





