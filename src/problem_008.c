#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LENGTH 1000
#define CONSEC 13

const char* location = "resources/problem_008.txt";

int* readFile(const char* filename) {
	int* arr = (int*)calloc(LENGTH, sizeof(int));
	int c = 0, pos = 0;
	char ch;

	FILE* file = fopen(filename, "r");

	if (file == NULL) {
		fclose(file);
		perror("ERROR: Could not open file\n");
		return NULL;
	}

	while ((ch = fgetc(file)) != EOF) {
		if (strncmp(&ch, "\n", 1) != 0) {
			arr[pos] = ch-48;
			pos++;
		}
	}

	fclose(file);

	return arr;
}

int main(int argc, char *argv[]) {
	int* arr = readFile(location);
	int i, j;
	unsigned long product, max = 0;

	for (int i=0; i<LENGTH; i++) {
		if (i > CONSEC) {
			product = arr[i];
			for (j=1; j < CONSEC; j++)
				product *= arr[i-j];
			if (product > max)
				max = product;
		}
	}

	printf("Answer: %lu\n", max);

	free(arr);
	return 0;
}
