#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void program() {
	int x = 0, y = 0;


	printf("Enter number x > ");
	scanf(" %d", &x);

	printf("Enter number y > ");
	scanf(" %d", &y);

	int powVal = pow(x, y);
	double sqrtVal = sqrt(powVal);

	printf(
		"\n"
		"x: %d\n"
		"y: %d\n"
		"x ^ y: %d\n"
		"Squareroot: %.2f\n",
		x, y, powVal, sqrtVal
	);
}

int main() {
	char yesNo = 'Y';

	while (yesNo == 'Y' || yesNo == 'y') {
		system("cls");
		program();

		printf("Do you want to continue (Y/N)? ");
		scanf(" %c", &yesNo);
	}
}

