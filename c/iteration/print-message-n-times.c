#include <stdio.h>
int main(void)
{
	int i, n;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		printf("%3d. C was developed by Dennis Ritchie at Bell Lab, New Jersey, USA in 1972.\n", i);
	}
	return 0;
}
