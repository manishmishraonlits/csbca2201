#include <stdio.h>
int main(void)
{
	int day;
	char names[][10] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	printf("Enter a number: ");
	scanf("%d", &day);
	if(day < 1 || day > 7)
	{
		printf("Invalid input!\n");
		return 0;
	}
	printf("%s!\n", names[day - 1]);
	return 0;
}
