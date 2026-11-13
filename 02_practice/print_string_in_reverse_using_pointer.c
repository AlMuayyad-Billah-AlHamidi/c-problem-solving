#include <stdio.h>
#include <string.h>

#define SIZE 50
int main (void)
{
	char string[SIZE],*p;
	int len;
	
	printf ("\n---------------------------------\n");
	printf ("Input a string:");
	if(fgets(string,SIZE,stdin)==NULL)
	{
		return 1;
	}
	string[strcspn(string,"\n")]='\0'; // remove the newline kept by fgets
	printf ("---------------------------------\n");
	printf ("Input string is: %s\n",string);
	len=strlen(string);
	p=(string+len-1); // last character, not the terminating '\0'
	
	printf ("Reverse of the string is : ");
	for(int i=0 ; i<len ; i++)
	{
		printf ("%c",*p);
		--p;
	}
	printf ("\n---------------------------------\n");
	
	return 0;
}
