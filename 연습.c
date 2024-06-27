#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dice()
{
    int random_num = rand() % (6) + 1;
    return random_num;
}

int main()
{
    srand(time(0));
    int a, b, c, d, e, f;
    a = dice();
    b = dice();
    c = dice();
    d = dice();
    e = dice();
    f = dice();

    printf("사용자 주사위=(%d, %d, %d)=%d\n", a, b, c, a + b + c);
    printf("컴퓨터 주사위=(%d, %d, %d)=%d\n", d, e, f, d + e + f);

    if ((a + b + c) > (d + e + f))
    {
        printf("사용자가 이겼습니다.\n");
    }
    else if ((a + b + c) == (d + e + f))
    {
        printf("비겼습니다.\n");
    }
    else
    {
        printf("컴퓨터 승리\n");
    }
}