#include <stdio.h>
#include <math.h>

int main() {
	long double a, b, c;

	printf("Enter a's value: ");
	scanf("%Lf", &a);
	printf("Enter b's value: ");
	scanf("%Lf", &b);
	printf("Enter c's value: ");
	scanf("%Lf", &c);
	long double x = powl(a, 2) + powl(b, 2), y = powl(c, 2), z = a + b;
	if (z > c) {
		if (x == y)
			printf("This is a right triangle.\n%Lf² + %Lf² = %Lf²\n", a, b, c);
		else if (x > y)
			printf("This is an acute triangle.\n%Lf² + %Lf² > %Lf²\n", a, b, c);
		else
			printf("This is an obtuse triangle.\n%Lf² + %Lf² < %Lf²\n", a, b, c);
	}
	else if (z < c)
		printf("This is not a triangle.\n%Lf + %Lf < %Lf\n", a, b, c);
	else
		printf("This is not a triangle.\n%Lf + %Lf = %Lf\n", a, b, c);
	return 0;
}
