#include <stdio.h>

int main(void)
{
	char operator;
	float num1,num2;
	printf("Enter operator either + or - or * or / :\n");
	scanf(" %c",&operator);
	
	printf("Enter two numbers:\n");
	scanf("%f %f",&num1,&num2);
	
	switch(operator)
	{
		case '+':
		printf("%f %c %f = %f \n",num1,operator,num2,num1+num2);
		break;
		
		case '-':
		printf("%f %c %f = %f \n",num1,operator,num2,num1-num2);
		break;
		
		case '*':
		printf("%f %c %f = %f \n",num1,operator,num2,num1*num2);
		break;
		
		case '/':
		if(num2 == 0)
		{
			printf("Error: division by zero\n");
		}
		else
		{
			printf("%f %c %f = %f \n",num1,operator,num2,num1/num2);
		}
		break;
		
		default:
		printf("Error: unknown operator\n");
		break;
	}
	
	return 0;
}
