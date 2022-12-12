#include <stdio.h>
int main(void)
{
	int m;
	printf("Enter marks: ");
	scanf("%d", &m);
	if(m > 100 || m < 0)
		printf("Invalid marks!\n");
	else if (m >= 80)
		printf("Grade A\n");
	else if (m >= 60)
		printf("Grade B\n");
	else if (m >= 40)
		printf("Grade C\n");
	else if (m < 40)
		printf("Grade D\n");
	return 0;
}
