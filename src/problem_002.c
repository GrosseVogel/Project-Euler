#include <stdio.h>
#include <stdlib.h>

#define THRESHOLD 4000000

int main(int argc, char *argv[]) {
	int temp;
	int i = 2, j = 1;
	unsigned sum = 0;

	while (i <= THRESHOLD) {
		if (i%2 == 0)
			sum += i;

		temp = i;
		i += j;
		j = temp;
	}

	printf("Answer: %u\n", sum);
	return 0;
}
