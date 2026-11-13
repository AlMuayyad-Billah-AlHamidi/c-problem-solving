#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
 marks[] holds the marks of the students, boys are at even positions
 (0, 2, 4, ...) and girls at odd positions (1, 3, 5, ...).
 gender 'b' -> sum the boys marks, gender 'g' -> sum the girls marks.
*/
int marks_summation(int* marks, int number_of_students, char gender) {
 
  int s=0;
  switch(gender)
  {
	  
	    case 'b':
		for(int i=0;i<number_of_students;i+=2)
		{
		  
		  s+=*(marks+i);
		  
		}
		break;

		case 'g':
		for(int i=1;i<number_of_students;i+=2)
	    {
		  
		  s+=*(marks+i);
		  
	    }
	
		break;
  }
  return s;
  
}

int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}
