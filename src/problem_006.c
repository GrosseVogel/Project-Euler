#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int limit=100, sum, sumSq;

	sum = limit*(limit+1)/2;
	sum *= sum;
	sumSq = (2*limit+1)*(limit+1)*limit/6;

	printf("Answer: %d\n", sum-sumSq);
	
	return 0;
}
