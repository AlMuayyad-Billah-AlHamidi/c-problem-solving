#include <stdio.h>


int main() {
    
    int num;
	printf("Enter a number :\n");
	scanf("%i",&num);
	
	if(num == 0)
		printf("The number is 0");
	
	else if(num > 0)
		printf("The number is positive");
	
	else if(num < 0)
		printf("The number is negative");
	
    
	
    return 0;
}


