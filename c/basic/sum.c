/*
AIM: Accept two integers and find their sum
Date: 20221129
*/

#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Enter a number: ");
	scanf("%d", &a);				//input
	printf("Ente another number: ");
	scanf("%d", &b);
	c = a + b;
	printf("The sum is %d.\n", c);		//output
}
