#include<stdio.h>
int main()
{
  int a;
  int b;
         
        printf("ENTER the value of a = ");
        scanf("%d", &a);
        
        printf("ENTER the value of b = ");
        scanf("%d", &b);
        
        printf("TRUE(0) OR FALSE(1) = %d\n", !( a==b));
        
        return 0;
}
