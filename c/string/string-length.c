#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i = 0;
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    while(str[i] != '\0')
    {
        i++;
    }
    printf("The string \"%s\" contains %d characters.\n", str, i);
    return 0;
}