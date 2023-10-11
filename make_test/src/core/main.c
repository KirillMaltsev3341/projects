#include <stdio.h>
#include "mylib.h"

int main() {
    int x;
    printf("x = ");
    scanf("%d", &x);
    printf("x*x = %d\n", func(x));
}