#include <stdio.h>

int main(void)
{
    char *ptr;
    char str[10];
    ptr = str;
    *ptr = 'd';
    *(ptr+1) = 'o';
    *(str+2) = 'd';
    ptr[3] = 'o';
    printf("%s\n", ptr);
    return 0;
}