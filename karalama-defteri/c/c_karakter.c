#include <stdio.h>
#include <string.h>

char kucuk[] = "ali";
char buyuk[] = "ÜZÜM";

int main() {
	printf("buyumus: %s\n", strupr(kucuk));
	printf("kuculmus: %s\n", strlwr(buyuk));
	return 0;
}
