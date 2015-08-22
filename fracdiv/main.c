#include <stdio.h>

struct Fraction
{
    int n;
    int d;
};
    

 void fractionPrinter(struct Fraction frac)
 {
     printf("%d / %d", frac.n, frac.d);
 }
 
float decimalator(struct Fraction f)
{
    float x_num = f.n;
    float y_den = f.d;
    
    float deci = x_num / y_den;
    
    return deci;
}

struct Fraction fracMulti(struct Fraction a, struct Fraction b)
{
    struct Fraction res;
    
    res.n = a.n * b.n;
    res.d = a.d * b.d;
    return res;
    
}

struct Fraction fracadd(struct Fraction a, struct Fraction b)
{
    struct Fraction res;
    
    res.n = (a.n * b.d) + (b.n * a.d);
    res.d = (a.d * b.d) + (b.d * a.d);
    return res;
    
}

struct Fraction fracdiv(struct Fraction a, struct Fraction b)
{
    struct Fraction res;
    int rep;
    
    rep = b.n;
    b.n = b.d;
    b.d = rep;
    res.n = a.n * b.n;
    res.d = a.d * b.d;
    return res;
    
}


int main()
{
    struct Fraction a, b, c;

    printf("enter your fracrion like 5/9: ");
    scanf("%d/%d", &a.n, &a.d);
    printf("and now your 2nd: ");
    scanf("%d/%d", &b.n, &b.d);
    
    c = fracdiv(a, b);
   
    fractionPrinter(a);
    printf(" / ");
    fractionPrinter(b);
    printf(" = ");
    fractionPrinter(c);
    printf("\n");
}



