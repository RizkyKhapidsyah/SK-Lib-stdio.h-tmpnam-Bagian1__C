#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
	Source by CPlusPlus
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main() {
	char buffer[L_tmpnam];
	char* pointer;

	tmpnam(buffer);
	printf("Tempname #1: %s\n", buffer);

	pointer = tmpnam(NULL);
	printf("Tempname #2: %s\n", pointer);

	_getch();
	return 0;
}