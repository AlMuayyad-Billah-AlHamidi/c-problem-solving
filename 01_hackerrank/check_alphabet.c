#include <stdio.h>
#include <ctype.h>

void check_alphabet(char ch)
{
	if(isalpha((unsigned char)ch))
	{
		printf("is an alphabet\n");
	}
	else
	{
		printf("is not an alphabet\n");
	}
}

int main(void)
{
    char c;
	printf("Enter an alphabet :");
	scanf(" %c",&c);
	check_alphabet(c);
    return 0;
}
