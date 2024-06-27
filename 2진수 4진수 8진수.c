#include <stdio.h>

void toBinary(int num) {
    if(num > 1) {
        toBinary(num/2);
    }
    printf("%d", num%2);
}

void toOctal(int num) {
    if (num >= 8) {
        toOctal(num / 8);
    }
    printf("%d", num % 8);
}
void toQuaternary(int num) {
    if (num >= 4) {
        toQuaternary(num / 4);
    }
    printf("%d", num % 4);
}