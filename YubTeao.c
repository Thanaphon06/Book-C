#include "stdio.h"
#include "conio.h"
main(){
    int x, y;
    x = 10, y = 5;
    printf("x: %2d | y: %2d ", x,y);
    printf(" | x *= y + 2: %2d ", x *= y + 2);
    printf(" | x is now; %2d\n", x);

    x = 10, y = 5;
    printf("x: %2d | y: %2d ", x,y);
    printf(" | x /= y + 1: %2d ", x /= y + 1);
    printf(" | x is now; %2d\n", x);

    x = 10, y = 5;
    printf("x: %2d | y: %2d ", x,y);
    printf(" | x %%= y + 2: %2d ", x %= y + 2);
    printf(" | x is now; %2d\n", x);
    getch();
}