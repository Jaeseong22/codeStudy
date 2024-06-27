#include <stdio.h>

int toBinary(int num) {
    if(num > 1) {
        toBinary(num/2);
    }
    printf("%d", num%2);
}