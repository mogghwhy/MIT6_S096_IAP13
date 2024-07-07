#include <stdio.h>

int get_triangular(int n) {
return n * ( n + 1 ) / 2;
}

void print_triangular(int n) {
for (int i = 0; i <= n; i++) {

printf("%d\n", get_triangular(i));
}
}
