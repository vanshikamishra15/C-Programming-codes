#include<stdio.h>
 int main ()
 {
     int arr[5];
      
       for(int i = 0; i < 5; i++)
       {
          printf("ENTER VALUE AT INDEX %d : ", i);
          scanf("%d",&arr[i]);
       }
           printf("array values are : ");
           for(int i = 0; i < 5; i++)
        {
            printf("%d ", arr[i]);
        }
            printf("\n");
            
           return 0;
}