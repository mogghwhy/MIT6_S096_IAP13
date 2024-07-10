#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
    char *str = (char *) malloc( 15 * sizeof(char));
    strcpy(str,"hakuna matata!");
    printf("%s\n", str);
    free(str);
    return 0;
}