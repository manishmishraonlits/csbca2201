#include <stdio.h>
int main(void)
{
	int c, d, t;
	printf("Enter the value of C: ");
	scanf("%d", &c);
	printf("Enter the value of d: ");
	scanf("%d", &d);
	t = d;
	d = c;
	c = t;
	printf("The values of C and D after swapping are %d and %d, respectively.\n", c, d);
	return 0;	
}
