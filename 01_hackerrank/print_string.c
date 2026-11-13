// C Program to take string separated by whitespace using 
// scanset characters 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void print_string()
{
    char string[100];
    scanf("%99[^\n]", string); 
    printf("Hello, World! \n%s ",string);
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    print_string();
    
     
    return 0;
}
