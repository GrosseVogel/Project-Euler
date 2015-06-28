#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool isPalindrome(int num) {
	char numChar[15];
	int length, i;

	sprintf(numChar, "%d", num);

	length = strlen(numChar);

	for (i=0; i<length/2; i++)
		if (numChar[i] != numChar[length-i-1])
			return false;

	return true;
}

int main(int argc, char *argv[]) {
	int i, j, temp, largest = 0;

	for (i=100; i<1000; i++)
		for(j=100; j<1000; j++)
			if (isPalindrome(i*j)) {
				largest = (i*j > largest) ? (i*j) : largest;
			}
	printf("Answer: %d\n", largest);
	return 0;
}
