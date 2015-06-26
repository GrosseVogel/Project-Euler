#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, j = 0;
	for (i=0; i<1000; i++) 
		if (i%3 == 0 || i%5 == 0)
			j += i;

	printf("Answer: %d\n", j);
	return 0;
}
