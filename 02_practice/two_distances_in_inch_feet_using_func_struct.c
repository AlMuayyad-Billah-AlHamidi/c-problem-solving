#include <stdio.h>
#include <string.h>



struct S_Dis{
	
	int Feet;
	float Inch;
	
}S_Distance1,S_Distance2,Sum_Two_Dis;

struct S_Dis Get_Dis(struct S_Dis S_Inf_Dis);
struct S_Dis Sum_Dis(struct S_Dis S_Inf_Dis1,struct S_Dis S_Inf_Dis2);




int main(void)
{	
	S_Distance1 = Get_Dis(S_Distance1);
	
	S_Distance2 = Get_Dis(S_Distance2);
	
	Sum_Two_Dis = Sum_Dis(S_Distance1,S_Distance2);
	
	printf("\nSum of two Distances = %i Feet , %.3f Inch \n",Sum_Two_Dis.Feet,Sum_Two_Dis.Inch);
	return 0;
}	




struct S_Dis Get_Dis(struct S_Dis S_Inf_Dis)
{
	printf("\nEnter Information for the Distance : \n");
	
	printf("Enter Feet: ");
	scanf("%i",&S_Inf_Dis.Feet);
	
	printf("Enter Inch: ");
	scanf("%f",&S_Inf_Dis.Inch);
	
	
	return S_Inf_Dis;
}



struct S_Dis Sum_Dis(struct S_Dis S_Inf_Dis1,struct S_Dis S_Inf_Dis2)
{
	struct S_Dis Sum_Two_Dis;
	
	Sum_Two_Dis.Feet = S_Inf_Dis1.Feet + S_Inf_Dis2.Feet;
	Sum_Two_Dis.Inch = S_Inf_Dis1.Inch + S_Inf_Dis2.Inch;
	
	while(Sum_Two_Dis.Inch>=12) // 12Inch=1Feet;
	{
		Sum_Two_Dis.Inch-=12;
		Sum_Two_Dis.Feet++;
		
	}
	return Sum_Two_Dis;
}
