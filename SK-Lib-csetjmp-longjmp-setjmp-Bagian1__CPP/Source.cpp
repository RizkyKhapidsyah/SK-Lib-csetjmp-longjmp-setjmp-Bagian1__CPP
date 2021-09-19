
#include <stdio.h>
#include <setjmp.h>
#include <conio.h>

jmp_buf buf;

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

void func() {
	printf("Selamat Datang Di Sini\n");
	longjmp(buf, 1);
	printf("Sini2\n");
}

int main() {
	if (setjmp(buf)) {
		printf("Sini3\n");
	} else {
		printf("Sini4\n");
		func();
	}

	_getch();
	return 0;
}
