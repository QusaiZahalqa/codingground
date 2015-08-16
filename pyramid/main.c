#include <stdio.h>

void printer(int num, char c)
{
    int i;

    for(i = 0; i < num; ++i)
    {
        printf("%c ", c);
    }
}

void stars(int numStars)
{
    printer(numStars, '*');
    printf("\n ");
}

void space(int spacez)
{
    printer(spacez, ' ');
    printf("\n");
}


void triangle(int hight)
{
    int i;
    int numStars;
    
    numStars = 0;
    for(i = 0; i < hight; ++i)
    {
        ++numStars;
        stars(numStars);
        printf("\n ");
    }
}

void pyramid(int hight)
{
    int i;
    int a = 1;
    int b = hight;
    
    
    for(i = 0; i < hight; ++i, --b, a = a+2)
    {
        printer(b, ' ' );
        printer(a, '*');
        printf("\n");
    }
    
}

int main()
{
   int rows = 5;
    
   printf("Enter the pyramid hight: ");
   scanf("%d", &rows);
    
   printf("\n");
   pyramid(rows);
    
    return 0;
}
