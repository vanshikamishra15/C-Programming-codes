#include<stdio.h>
 int main ()
 {
     int a[6] = { 3, 4, -1, 6, 2, 0};
     int num = a[0];
      
       for(int i = 0; i < 6; i++)
       {
         if(num > a[i])
          num = a[i];
       }
        printf("smallest = %d\n", num);
           return 0;
}