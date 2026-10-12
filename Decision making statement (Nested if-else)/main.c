#include<stdio.h>
int main()
{
  int marks;
        
         
        printf("ENTER the value of marks = ");
        scanf("%d", &marks);
        
       
         if(marks>=45)
{
     if(marks<=75) 
{
        printf("GRADE : distinction\n");
}
   else
{
        printf("GRADE : pass\n");
}
}
   else 
   {
       printf("GRADE : FAIL\n");
   }

        return 0;
}