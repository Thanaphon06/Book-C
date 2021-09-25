#include "stdio.h"
#include "conio.h"
main()
{
    int x,m,b1000,b500,b100;
    
    printf("Input : ");
    scanf("%d", &x);
    if ("x < 100 %d\n", x<100)
    {
        printf("pls fine you money\n");
    }
    else
    {
    b1000 = x / 1000;
    m = x % 1000;
    b500 = m / 500;
    m = m % 500;
    b100 = m / 100;
    printf("b1000 = %d\n", b1000);    
    printf("b500 = %d\n", b500);    
    printf("b100 = %d\n", b100);
    }
    getch();
}

