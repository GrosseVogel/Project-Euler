#include <stdio.h>
#include <stdlib.h>

bool isDivisible(int num, int min, int max) {
	int i;

	for (i = min; i<= max; i++)
		if (num%i != 0)
			return false;

	return true;
}

int main(int argc, char *argv[]) {
	int min = 1, max = 20, num = max;

	while (true) {
		if (isDivisible(num, min, max)) {
			printf("Answer: %d\n", num);
			return 0;
		}
		num++;
	
	}
	return 0;
}
