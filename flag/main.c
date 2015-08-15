#include <stdio.h>

void stars(int numStars)
{
    int i;
    for(i = 0; i < numStars; ++i)
    {
        printf("* ");
    }
    printf("\n");
}

void square(int side)
{
    int i;
    for(i = 0; i < side; ++i)
    {
       stars(side);
    }
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
    }
}

void reverseTriangle(int hight)
{
    int i;
    int numStars;
    
    numStars = hight;
    for(i = 0; i < hight; ++i)
    {
        stars(numStars);
        --numStars;
    }
}

int main()
{
    int rows;
    int counter;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    /* Draw triangle */
    triangle((rows + 1) / 2);
    reverseTriangle((rows + 1) / 2 - 1 );
    
    return 0;
}
