#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[15];
    strcpy(*(&str),"hakuna matata!");
    printf("%s\n", str);
    return 0;
}