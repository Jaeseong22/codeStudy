#include <stdio.h>

double recursive(int n) {
    double sum = 0.0;
    for(int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }
    return sum;
}

int main(void) {
    int n;
    printf("n의 값은? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("n은 양의 정수여야 합니다.\n");
    } else {
        printf("%lf\n", recursive(n));
    }

    return 0;
}