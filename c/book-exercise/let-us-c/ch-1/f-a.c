#include <stdio.h>
int main(void)
{
	float bs, da, hra, gs;
	printf("Enter Basic Salary: ");
	scanf("%f", &bs);
	da = bs * 40 / 100;
	hra = bs * 20 / 100;
	gs = bs + da + hra;
	printf("Gross salary is %1.2f.\n", gs);
	return 0;
}
