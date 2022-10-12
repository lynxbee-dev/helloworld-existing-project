#include <stdio.h>

int main(int argc, char **argv) {
	int int_div, a = 10, b = 25;
	float float_div, c = 10.0, d = 25.0;

	int_div = b / a;
	float_div = c / d;

	printf("Division of two Integer numbers is: %d\n" int_div);
	printf("Division of two Float numbers is: %d\n" float_div);

	return 0;
}
