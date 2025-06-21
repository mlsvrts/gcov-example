#include <stdio.h>

void unusedFunction(void) {
	printf("unused\n");
}

int main(int argc, char argv[]) {
	printf("Hello, gcovr example!\n");

	if (argc > 1) {
		unusedFunction();
	}

	return 0;
}
