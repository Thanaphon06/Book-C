#include "stdio.h"
#include "conio.h"
main(){
    int i, j;
    printf("Enter frist number : ");
    scanf("%d", &i);
    printf("Enter second number : ");
    scanf("%d", &j);

    printf("i < j %d\n", i<j);
    printf("i <= j %d\n", i<=j);
    printf("i == j %d\n", i==j);
    printf("i > j %d\n", i>j);
    printf("i >= j %d\n", i>=j);

    printf("i && j %d\n", i&&j);
    printf("i || j %d\n", i||j);
    printf("i  j %d\n", !i, !j);
}