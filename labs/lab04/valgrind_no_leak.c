#include <stdlib.h>

int main(void) {
    int *d = malloc (sizeof(int));
    *d = 103;
    free(d);
    return 0;
}