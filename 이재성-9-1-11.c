/* 이재성-9-1-11
저는 이 코드가 더 좋다고 생각합니다. 
컴퓨터의 실행속도 만을 따졌을 때는 2가 더 빠를 것입니다.
하지만 직관적으로 이해하기 쉽게 짠 코드는 이것 이라고 생각을 해 이 코드가 더 좋다고 생각합니다.
*/
#include <stdio.h>


int isPrime(int x) {
    if(x<=1) {
        return 0;
    }
    for(int i=2; i<x; i++) {
        if(x%i == 0) {
            return 0;
        } 
    }
    return 1;
}

void prime_plus(int y) {
    int found = 0;
    for(int i=2; i<y/2; i++) {
        if(isPrime(i) && isPrime(y-i)) {
            printf("%d = %d + %d\n", y, i, (y - i));
            printf("%d = %d + %d\n", y, (y-i), i);
            found = 1;
        }
    }
    if(!found) {
        printf("%d를 두 소수의 합으로 표현 할 수 없습니다.", y);
    }
}  

int main(void) {
    int x;
    printf("양의 정수를 입력하시오: ");
    scanf("%d", &x);
    if(x<=0) {
        printf("잘 못 입력 했습니다.");
    }
    else {
        prime_plus(x);
    }
}