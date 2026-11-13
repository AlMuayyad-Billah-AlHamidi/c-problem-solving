#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int sum=0, n;
	scanf("%d",&n);
	if(n<=0)
	{
		printf("0");
		return 0;
	}
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",(arr+i));
		sum+=arr[i];
	}
	printf("%d",sum);
    return 0;
}
