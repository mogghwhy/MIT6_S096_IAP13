#include <stdio.h>

int main(int argc, char ** argv) {
    int i = 1;
    jj:
    if ( i < argc ) {
        printf("%s\n", argv[i]);
        i++;
        goto jj;
    }
    return 0;
}