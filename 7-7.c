#include <stdio.h>

int main(void) {
    for (int i = 1; i < 8; i++) {
        for (int j = 7; j > i; j--) {
            printf(" ");
        }
        for (int k = 0; k < i; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}