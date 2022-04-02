#include <stdio.h>
#define COURSE_NUMBER_LENGTH 6
int course_number[COURSE_NUMBER_LENGTH] = {2, 3, 4, 1, 2, 4};
int main() {
	for(int i = 0; i < COURSE_NUMBER_LENGTH; i++) {
		printf("%d", course_number[i]);
	}
	printf("\n");
	return 0;
}