#include <stdio.h>
int main(void)
{
	int n, d, sum = 0;
	printf("Enter a number: ");
	scanf("%d", &n);
	do
	{
		d = n % 10;
		n = n / 10;
		sum += d;		//means sum  = sum + i
	}
	while(n > 0);
	printf("The sum is %d.\n", sum);
	return 0;
}
