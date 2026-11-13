#include <stdio.h>



struct S_Complex{
	
	float Real,Image;
	
}S_Num1,S_Num2,Sum_Two_Nums;


struct S_Complex Get_Num(struct S_Complex S_Inf_Num);
struct S_Complex Sum_Nnm(struct S_Complex S_Inf_Num1,struct S_Complex S_Inf_Num2);




int main(void)
{	
	S_Num1 = Get_Num(S_Num1);
	
	S_Num2 = Get_Num(S_Num2);
	
	Sum_Two_Nums = Sum_Nnm(S_Num1,S_Num2);
	
	printf("\nSum = %.3f + %.3fj \n" , Sum_Two_Nums.Real , Sum_Two_Nums.Image);
	return 0;
}	




struct S_Complex Get_Num(struct S_Complex S_Inf_Num)
{
	printf("\nEnter Complex Number : \n");
	
	printf("Enter Real: ");
	scanf("%f",&S_Inf_Num.Real);
	
	printf("Enter Image: ");
	scanf("%f",&S_Inf_Num.Image);
	
	
	return S_Inf_Num;
}



struct S_Complex Sum_Nnm(struct S_Complex S_Inf_Num1,struct S_Complex S_Inf_Num2)
{
	struct S_Complex Sum_Two_Nums;
	
	Sum_Two_Nums.Real = S_Inf_Num1.Real + S_Inf_Num2.Real;
	Sum_Two_Nums.Image = S_Inf_Num1.Image + S_Inf_Num2.Image;
	
	
	return Sum_Two_Nums;
}
