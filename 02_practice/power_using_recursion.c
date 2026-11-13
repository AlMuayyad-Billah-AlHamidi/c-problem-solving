#include <stdio.h>

unsigned int powerOf_number(unsigned int number,unsigned int power);


int main(void)
{    

	unsigned int x , y ,z;
	printf("Enter number then its power : \n");
	scanf("%u %u" ,&x ,&y);

	z = powerOf_number(x,y);
	printf("result is : %u",z);
	
	return 0;
}








 unsigned int powerOf_number(unsigned int number,unsigned int power)
{
	
	if(power == 0)
	{
		return 1;// base case (x^0 = 1)
	}
		
	else 
	{
		return(number * (powerOf_number(number,power-1))); //recursion procedure
	}
	
	
}
