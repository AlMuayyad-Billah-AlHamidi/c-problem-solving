#include <stdio.h>
#include <string.h>

#define STUDENTS 3


struct S_Info{
	
	char name[20];
	int roll;
	float marks;
	
}S_student[STUDENTS];

struct S_Info Get_Info_student(struct S_Info S_Info_student );
void print_Info_student(struct S_Info S_print_Info );



int main(void)
{
	for(int i=0 ; i<STUDENTS ;i++)
	{
		S_student[i] = Get_Info_student(S_student[i]);
		getchar();//get \n from buffer

	}
	
	for(int i=0 ; i<STUDENTS ;i++)
	{
		print_Info_student(S_student[i]);
	}
	
	return 0;
}	









struct S_Info Get_Info_student(struct S_Info S_Info_student )
{
	printf("\nEnter Information of the student : \n");
	
	printf("Enter Name: ");
	if(fgets(S_Info_student.name,sizeof(S_Info_student.name),stdin)!=NULL)
	{
		S_Info_student.name[strcspn(S_Info_student.name,"\n")]='\0'; // remove the newline kept by fgets
	}
	 
	printf("Enter Roll Number: ");
	scanf("%i",&S_Info_student.roll);
	
	printf("Enter Marks: ");
	scanf("%f",&S_Info_student.marks);
	 
	
	return S_Info_student;
}


void print_Info_student(struct S_Info S_print_Info )
{
		printf("\nDisplay Info : \n");
		printf("Name: %s\n",S_print_Info.name);
		printf("Roll: %i\n",S_print_Info.roll);
		printf("Marks: %.2f\n",S_print_Info.marks);
}
