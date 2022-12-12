#include <stdio.h>
#include <string.h>
int main()
{
	char ans[50];
	printf("Q. Who is the inventor of 'C Language'?\n");
	printf("A. ");
	//gets(ans);	//Should not be used as it is dangerous
	scanf("%[^\n]", ans);
	if(strcmp(ans, "Dennis Ritchie") == 0)
		printf("You are GENIUS!\n");
	else
		printf("Go back to School!\n");
	return 0;
}
