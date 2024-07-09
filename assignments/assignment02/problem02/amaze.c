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

void amaze4(void) {
    int i = 0;
    printf("amaze4:\t\t");
    i++;
    if (i == 1) {
        printf("%d ", i);
        i++;
    }
    if (i == 2) {
        i++;
    }
    if (i == 3) {
        printf("%d ", i);
        i++;
    }
    if (i == 4) {
        i++;
    }    
    if (i == 5) {
        printf("%d ", i);
        i++;
    }
    if (i == 6) {
        i++;
    }    
    if (i == 7) {
        printf("%d ", i);
        i++;
    }
    if (i == 8) {
        i++;
    }    
    if (i == 9) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
}

void amaze5(void) {
    int i = 0;
    printf("amaze5:\t\t");
    amz5:
    i++;
    if (i <= 10) {
        if (i % 2 == 1) {
            printf("%d ", i);
        }
        goto amz5;
    }
    printf("\n");
}

void amaze6(void) {
    int i = 0;
    i++;
    printf("amaze6:\t\t");
    while (i < 10) {
    switch (i) {
        case 1: printf("%d ", i); break;
        case 3: printf("%d ", i); break;        
        case 5: printf("%d ", i); break;                
        case 7: printf("%d ", i); break;                        
        case 9: printf("%d ", i); break;                                
    }
    i++;
    }
    printf("\n");
}

int main(int argc, char ** argv){
    amazeWOW();
    amaze2();
    amaze3();
    amaze4();
    amaze5();    
    amaze6();
    return 0;
}