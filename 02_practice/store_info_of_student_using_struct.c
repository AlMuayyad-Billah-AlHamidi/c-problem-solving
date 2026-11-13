#include <stdio.h>
#include <string.h>



struct S_information{
	
	char name[20];
	int roll;
	float marks;
	
}S_student;






int main(void)
{
	
	printf("\nEnter Information of the student : \n");
	
	printf("Enter Name: ");
	if(fgets(S_student.name,sizeof(S_student.name),stdin)==NULL)
	{
		return 1;
	}
	S_student.name[strcspn(S_student.name,"\n")]='\0'; // remove the newline kept by fgets
	
	printf("Enter Roll Number: ");
	scanf("%i",&S_student.roll);
	
	printf("Enter Marks: ");
	scanf("%f",&S_student.marks);
	
	printf("\nDisplay Info : \n");
	printf("Name: %s\n",S_student.name);
	printf("Roll: %i\n",S_student.roll);
	printf("Marks: %.2f\n",S_student.marks);
	
	return 0;
}	
