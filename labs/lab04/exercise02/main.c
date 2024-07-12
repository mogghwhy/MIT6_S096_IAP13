#include <stdlib.h>
#include <stdio.h>

union data
{
    int n;
    char ar[sizeof(int)];
};

int main() {
    printf("%li\n", sizeof(int));
    union data g;
    g.n = 16;
    for(int i = 0; i < 4; i++) {
        printf("%i ",g.ar[i]);
    }
    printf("\n");
    return 0;
}