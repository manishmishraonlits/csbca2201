#include <stdio.h>
int main(void)
{
	int n, i;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("The factors of %d are:\n", n);
	for (i = 1; i <= n; i++)
	{
		if(n % i == 0)
			printf("%d\n", i);
	}
	return 0;
}
