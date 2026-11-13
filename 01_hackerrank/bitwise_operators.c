#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void calculate_the_maximum(int n, int k) {

  int a ,b,Or,And,Xor,max_Or=0,max_And=0,max_Xor=0;
  for(a=1;a<n;a++)
  {
      b=a+1;
      for(;b<=n;b++)
      {
         Or  =a|b;
         And =a&b;
         Xor =a^b;
         if(And<k && And>max_And){max_And=And;}
         
        
         if(Or<k && Or>max_Or){max_Or=Or;}
         
         
         if(Xor<k && Xor>max_Xor){max_Xor=Xor;}
         
         
        //printf("%d  %d  %d\n",And,Or,Xor);

      }
     //printf("*.....................*\n");
     
  }
  printf("%d\n%d\n%d",max_And  , max_Or , max_Xor);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    
 
    return 0;
}
