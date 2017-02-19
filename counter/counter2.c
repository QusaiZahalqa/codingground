#include <stdio.h>

int main(void)
{
    int x, i;
   
    printf("enter a num\n");
    scanf("%d", &x);
    
    for(i = 0; i < x * 2; ++i)
    {
        if(i < x )
        {
            printf("%d,", i);
        }
        else
        {
            printf("%d,", 2*x-i);
        }
    }
    printf("0.\n");
}