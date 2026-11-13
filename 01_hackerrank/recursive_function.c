/*Task

There is a series S, , where the next term is the sum of pervious three terms. Given the first three terms of the series,a ,b , and c respectively, you have to output the nth term of the series using recursion.*/



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
 
   switch(n)
  {
      case 1:return a;
      break;
      
      case 2:return b;
      break;

      case 3:return c;
      break;
      
      default:
      return(find_nth_term(n-1,a,b,c)+find_nth_term(n-2,a,b,c)+find_nth_term(n-3,a,b,c));
      // f(n)=f(n);1<=n<4: f(1)=a, f(2)=b , f(3)=c 
      // f(n)=f(n-1)+f(n-2)+f(n-3) ; n>4: f(4)=f(3)+f(2)+f(1) 
      

  }
 
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
