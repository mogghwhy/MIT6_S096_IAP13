#include <stdio.h>

void amazeWOW(void) {

    int i = 0;
    printf("amazeWOW:\t");
    for(i = 0; i <= 10; i++) {
        if (i % 2 == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main(int argc, char ** argv){
    amazeWOW();
return 0;
}