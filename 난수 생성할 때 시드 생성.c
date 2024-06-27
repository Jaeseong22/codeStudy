#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(0));
    int random_id = rand()%(10-1+1)+1;
    printf("%d", random_id);
}