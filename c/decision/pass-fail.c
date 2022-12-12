#include <stdio.h>
int main(void)
{
	int m;
	printf("Enter marks: ");
	scanf("%d", &m);
	if(m >= 40)
		printf("Pass\n");
	else
		printf("Fail\n");
	return 0;
}
