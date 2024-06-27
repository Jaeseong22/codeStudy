#include <stdio.h>

int isPrime(int x) {
    if(x <= 1) {
        return 0;
    }
    if (x <= 3) {
        return 1;
    }
    if (x % 2 == 0 || x % 3 == 0) {
        return 0;
    }
    for (int i = 5; i * i <= x; i += 6) {
        if (x % i == 0 || x % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}

void prime_sum(int num) {
    int found = 0;
    for (int i = 2; i <= num / 2; i++) {
        if (isPrime(i) && isPrime(num - i)) {
            printf("%d = %d + %d\n", num, i, num - i);
            printf("%d = %d + %d\n", num, (num-i), i);
            found = 1;
        }
    }
    if (!found) {
        printf("%d를 두 소수의 합으로 표현 할 수 없습니다.\n", num);
    }
}

int main(void) {
    int x;
    printf("양의 정수를 입력하시오: ");
    scanf("%d", &x);
    if (x <= 0) {
        printf("잘못 입력했습니다.\n");
    } else {
        prime_sum(x);
    }
    return 0;
}