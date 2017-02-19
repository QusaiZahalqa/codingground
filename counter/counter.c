#include <stdio.h>

int main(void)
{
     int x, i;
   
   printf("insert num\n");
   scanf("%d",&x);
   
   for(i = 0; i <= x; i++)
   {
       printf("%d,", i);
   
   }
   
   for(i -= 2; i >= 0; i--)
   {
       printf("%d,", i);
   }
 
   printf("\n");
}