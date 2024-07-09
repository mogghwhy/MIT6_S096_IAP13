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

void amaze2(void) {
    int i = 0;
    printf("amaze2:\t\t");
    while (i <= 10) {
        if (i % 2 == 1) {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");
}

void amaze3(void) {
    int i = 0;
    printf("amaze3:\t\t");
    do {
        if (i % 2 == 1) {
            printf("%d ", i);
        }
        i++;
    }
    while (i <= 10);

    printf("\n");
}

int main(int argc, char ** argv){
    amazeWOW();
    amaze2();
    amaze3();
return 0;
}