#include<stdio.h>
int main()
{
  int a;
  int b;
  
         
        printf("ENTER the value of a = ");
        scanf("%d", &a);
        
        printf("ENTER the value of b = ");
        scanf("%d", &b);
        
        printf("prefix decrement = %d\n", --a - b);
        
        printf("after prefix decrement = %d\n" , a);
        printf("b = %d\n" , b);
        
        return 0;
}
