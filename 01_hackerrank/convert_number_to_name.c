#include <stdio.h>


void ConvertNumberToName(int num)
{
	switch(num)
	{
		case 1:printf("one\n");
		break;
		
		case 2:printf("two\n");
		break;
		
		case 3:printf("three\n");
		break;
		
		case 4:printf("four\n");
		break;
		
		case 5:printf("five\n");
		break;

		case 6:printf("six\n");
		break;
		
		case 7:printf("seven\n");
		break;
		
		case 8:printf("eight\n");
		break;
		
		case 9:printf("nine\n");
		break;
		
	}
}




int main()
{
    int a;
    printf("Enter a number in range [1,9] : \n");
    scanf("%d", &a);
	if(a<=9 && a>=1)
	{
		ConvertNumberToName(a);
	}
	
	else
	{
		printf("Try agian..");
	}
    return 0;
}
