#include <stdlib.h>
#include <stdio.h>

void fn()
{
    int *x = malloc(10 * sizeof(int));
    printf("%d", *x); // uninitialized
    x[10] = 0; // array out of bounds
    // no memory deallocation happens
}

int main(void)
{
    fn();
    return 0;
}