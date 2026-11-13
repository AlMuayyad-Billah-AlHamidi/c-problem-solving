#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{

    int n;
    scanf("%d", &n);
    int z=2*n;
    
      for(int i=1 ; i<z ; i++)
        
    {
    
        for(int j=1 ; j<z ; j++)
        {
            printf("%d ", (abs(i-n) > abs(j-n)) ? 1 + abs(i-n) : 1 + abs(j-n));

        }
    
        printf("\n");
    }
    
    return 0;
}