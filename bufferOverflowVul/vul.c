#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char buffer[500];
	strcpy(buffer, argv[1]);
	printf("Welcome to %s\n", argv[0]);
	printf("Employee Name Saved %s\n", argv[1]);
	return 0;
}
