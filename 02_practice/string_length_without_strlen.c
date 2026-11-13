#include <stdio.h>
#define SIZE 50


int main(void)
{    

	int counter=0;
	char string[SIZE]="";
	printf("Enter string :\n");
	if(fgets(string,SIZE,stdin)==NULL)
	{
		return 1;
	}
	
	while(string[counter]!='\0' && string[counter]!='\n')//not equal null (fgets keeps the \n)
	{
		counter++;
		
	}
	
	printf("Length of string is: %i\n",counter);

	return 0;
}
