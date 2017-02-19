#include <stdio.h>

int main(void)
{
    int x, i, c;
   
    printf("enter a num\n");
    scanf("%d", &x);
    
    c = 0;
    for(i = 0; i < x * 2; ++i)
    {
        printf("%d,", c); 
        if(i < x )
        {
            ++c;
        }
        else
        {
            --c;
        }
    }
    printf("0.\n");
}