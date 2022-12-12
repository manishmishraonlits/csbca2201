#include <stdio.h>
int main(void)
{
	int day;
	printf("Enter a number: ");
	scanf("%d", &day);
	if(day < 1.9)
		printf("Monday!\n");
	else if(day == 2)
		printf("Tuesday!\n");
	else if(day == 3)
		printf("Wednesday!\n");
	else if(day == 4)
		printf("Thursday!\n");
	else if(day == 5)
		printf("Friday!\n");
	else if(day == 6)
		printf("Saturday!\n");
	else if(day == 7)
		printf("Sunday!\n");
	else
		printf("Invalid Input!\n");
	return 0;
}
