#include <stdio.h>

int a, b;
char op;

// 함수 선언
void add(int a, int b);
void subtract(int a, int b);
void multiply(int a, int b);
void division(int a, int b);

int main() {
    while(1) {
        printf("연산을 입력하시오 (예: 2 + 3): ");
        scanf("%d %c %d", &a, &op, &b);

        switch(op) {
            case '+':
                add(a, b);
                break;
            case '-':
                subtract(a, b);
                break;
            case '*':
                multiply(a, b);
                break;
            case '/':
                division(a, b);
                break;
            default:
                printf("잘못된 연산자입니다.\n");
        }
    }
    return 0;
}

// 덧셈 함수
void add(int a, int b) {
    static int count = 0;
    count++;
    printf("덧셈은 총 %d번 실행되었습니다.\n", count);
    printf("연산결과: %d\n", a + b);
}

// 뺄셈 함수
void subtract(int a, int b) {
    static int count = 0;
    count++;
    printf("뺄셈은 총 %d번 실행되었습니다.\n", count);
    printf("연산결과: %d\n", a - b);
}

// 곱셈 함수
void multiply(int a, int b) {
    static int count = 0;
    count++;
    printf("곱셈은 총 %d번 실행되었습니다.\n", count);
    printf("연산결과: %d\n", a * b);
}

// 나눗셈 함수
void division(int a, int b) {
    static int count = 0;
    count++;
    if (b == 0) {
        printf("0으로 나눌 수 없습니다.\n");
        return;
    }
    printf("나눗셈은 총 %d번 실행되었습니다.\n", count);
    printf("연산결과: %d\n", a / b);
}