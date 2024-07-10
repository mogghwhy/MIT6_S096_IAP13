#include <stdio.h>

int main(void)
{
    int x = 4;
    int b = 32;
    int * t = &x;
    int * d = NULL;
    d = &b;
    *t = *t * 2;
    printf("%i\n", *t);
    printf("%i\n", x);

    t = &b;
    *t += 5;

    printf("%i\n", *t);
    printf("%i\n", b);    
    printf("%i\n", *d);
    return 0;
}