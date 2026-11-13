#include <stdio.h>


struct S_student{
	
	char name[20];
	int roll;
	float marks;
	
}s;

union U_student{
	
	char name[20];
	int roll;
	float marks;
	
}u;



int main(void)
{
	printf("\nSize of the structure is: %lu",(unsigned long)sizeof(s));// 28
	printf("\nSize of the union is: %lu\n",(unsigned long)sizeof(u));//20
	
	return 0;
}	
