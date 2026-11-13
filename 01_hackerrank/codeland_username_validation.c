/*1. The username is between 4 and 25 characters.
2. It must start with a letter.
3. It can only contain letters, numbers, and the underscore character.
4. It cannot end with an underscore character.

If the username is valid then your program should return the string true, otherwise return the string false.

EX:
Input: "aa_"
Output: false
*/

#include <stdio.h> 
#include <string.h>
#include <ctype.h>
void CodelandUsernameValidation(char * str) {
  int len=0;  
  //printf("%s", str);
  len = strlen(str);
  int isValid = 0;
  if( (len>=4) && (len<=25) && (isalpha((unsigned char)str[0])) && (str[len - 1] != '_') )
  {
		isValid = 1;
		for (int i = 0; i < len ; i++) {
			if (!isalnum((unsigned char)str[i]) && str[i] != '_') {
				isValid = 0;
				break;
			}

    }
    
    
  }
	
  if(isValid){printf("true");}
  else{printf("false");}
  
  //return true or false;
}

int main(void) { 
  char buf[100];
  if (scanf("%99s", buf) != 1) {
    return 1;
  }
  CodelandUsernameValidation(buf);
  return 0;
    
}
