#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s,*token;
    s = malloc(1024 * sizeof(char));
    scanf("%1023[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
	
	token = strtok(s," ");
	while(token!=NULL)
	{
		printf("%s\n",token);
		token=strtok(NULL," ");
	}
    free(s);
    return 0;
}
