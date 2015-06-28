#include <stdio.h>
#include <stdlib.h>

bool isPrime(unsigned long number)  {
	int i;

	for (i=2; i*i<=number; i++)
		if (number%i == 0)
			return false;
	return true;
}

int main(int argc, char *argv[]) {
	int count=0,  limit = 10001;
	unsigned long i=2, num=0;

	do {
		if (isPrime(i)) {
			count++;
			num = i;
		}
		i++;

	 } while (count <10001);

	printf("Answer: %lu\n", num);
	return 0;
}
