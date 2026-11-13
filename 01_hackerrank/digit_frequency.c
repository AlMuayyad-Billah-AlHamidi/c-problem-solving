//Given a string S , , consisting of alphabets and digits, find the frequency of each digit in the given string.
#include <stdio.h>
#include <string.h>
//example
//a11472o5t6
//0 2 1 0 1 1 1 1 0 0 
int main()
{

	 int len ,freq[10]={0};//all element in a freq array equal 0
	 char arr[1000];
	 scanf("%s",arr);
	 len=strlen(arr);
	 
	 for(int i=0;i<len;i++)
	 {
	
		 switch(arr[i])
		 {
			 case '0':freq[0]++;
			 break;
			 case '1':freq[1]++;
			 break;
			 case '2':freq[2]++;
			 break;
			 case '3':freq[3]++;
			 break;
			 case '4':freq[4]++;
			 break;
			 case '5':freq[5]++;
			 break;
			 case '6':freq[6]++;
			 break;
			 case '7':freq[7]++;
			 break;
			 case '8':freq[8]++;
			 break;
			 case '9':freq[9]++;
			 break;
		 }
	 }
	 for(int i=0;i<10;i++)
		printf("%d ",freq[i]);
	 
    return 0;
}