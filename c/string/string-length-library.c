#include <stdio.h>
#include <string.h>

int main(void)
{
	int l;
	char str[100];
	printf("Enter a string: ");
	scanf("%[^\n]", str);
	l = strlen(str);
	printf("The string %s has %d characters.\n", str, l);
	return 0;
}
