#include <stdio.h>
int main(void)
{
	char name[50];
	printf("Enter your full name: ");
	scanf("%[^\n]", name);
	printf("Good Afternoon! %s\n", name);
	return 0;
}
