#include <stdio.h>
#include <string.h>
#define SIZE 50


int main(void)
{    

	int len=0 , i;
	char string[SIZE]="" ,re_string[SIZE]="";
	printf("Enter string :\n");
	if(fgets(string,SIZE,stdin)==NULL)
	{
		return 1;
	}
	string[strcspn(string,"\n")]='\0'; // remove the newline kept by fgets
	
	len = strlen(string);
	for(i=0 ; i<len ;i++)
	{
		re_string[len-(i+1)]=string[i];
		
	}
	
	printf("String is : %s\n",string);
	printf("Reverse string is : %s\n",re_string);

	return 0;
}
