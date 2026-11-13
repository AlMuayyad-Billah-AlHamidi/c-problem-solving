#include<stdio.h>
#include<string.h>



int main(void)
{
	
	float  a,b ,temp;
	printf("Enter a & b : \n");
	scanf("%f %f",&a,&b);
	temp=a;
	a=b;
	b=temp;
	
	/*
	another way (can lose precision with floats)
	a=a+b;
	b=a-b;
	a=a-b;
	*/
	printf("a=%0.3f , b=%0.3f ",a,b);

	return 0;
}
