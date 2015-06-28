#include <stdio.h>
#include <stdlib.h>

int isPrime(unsigned long number) {
	int i;

	for (i=2; i*i<=number; i++)
		if (number%i ==0)
			return 0;
	return 1;
}


int main(int argc, char *argv[]) {
	unsigned long number = 600851475143, highestPrime, i = 2;

	while (i*i <= number) {
		if (number%i==0 && isPrime(i))
			highestPrime = i;
		i++;
	}

	printf("Answer: %lu\n", highestPrime);

	return 0;
}
