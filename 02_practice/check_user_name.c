#include<stdio.h>
#include<string.h>

#define SIZE 50


int check_user_name(char *user_name,char *enterd_name);


int main(void)
{		
	int vald;
	char user_name[SIZE]="$Moaiyad";
	char enterd_name[SIZE];
	
	printf("Enter user name : ");
	if(fgets(enterd_name,SIZE,stdin)==NULL)
	{
		return 1;
	}
	enterd_name[strcspn(enterd_name,"\n")]='\0'; // remove the newline kept by fgets
	
	vald = check_user_name(user_name,enterd_name);
	
	if(vald==0)
	{
		printf("User name is correct.");		
	}
	else
	{
		printf("User name is not correct.");
	}
	
	return 0;
}




int check_user_name(char *user_name,char *enterd_name)
{
	return strcmp(user_name,enterd_name);
}
