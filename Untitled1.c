#include "stdio.h"
#include "conio.h"
main(){
	int a = 17;
	int b = 5;
	float x = 17.67;
	float y = 5.1;
	
	printf("Intergral calculation\n");
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("%d %% %d = %d\n", a, b, a % b);

	printf("\n");
	printf("Floating - point calculations\n");
	printf("%f + %f = %f\n", x, y, x + y);
	printf("%f - %f = %f\n", x, y, x - y);
	printf("%f * %f = %f\n", x, y, x * y);
	printf("%f / %f = %f\n", x, y, x / y);
	
	
}

