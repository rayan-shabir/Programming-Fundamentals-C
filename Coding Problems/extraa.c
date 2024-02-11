#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    srand(time(NULL));
    int a = rand() % 10+1;

    printf("a = %d", a);
}