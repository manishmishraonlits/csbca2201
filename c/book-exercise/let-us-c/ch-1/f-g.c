#include <stdio.h>
int main(void)
{
	int n, d, s;
	printf("Enter a 5-digit number: ");
	scanf("%d", &n);
	d = n % 10;
	s = d;
	n = n / 10;
	d = n % 10;
	s = s + d;
	n = n / 10;
	d = n % 10;
	s = s + d;
	n = n / 10;
	d = n % 10;
	s = s + d;
	n = n / 10;
	d = n;
	s = s + d;
	
	printf("The sum is %d.\n", s);
	return 0;
}
