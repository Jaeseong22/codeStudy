/* 이재성-9-1-21
저는 이 코드가 더 좋다고 생각합니다. 
왜냐하면 직관적으로 어떤 코드인지 바로 생각을 할 수 있기 때문입니다.
*/
#include <stdio.h>

double recursive(int n) { 
    if(n == 1) {
        return 1.0;
    } else {
        return 1.0/n + recursive(n-1);
    }
}

int main(void) {
    int n;
    printf("n의 값은? ");
    scanf("%d", &n);

    printf("%lf\n", recursive(n));
    return 0;
}