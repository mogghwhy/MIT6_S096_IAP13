#include <stdlib.h>

int main(void) {
    char *a = (char *) malloc(sizeof(char));
    *a = 'b';
    //free(a);
    return 0;
}