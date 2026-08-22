#include <stdio.h>

void reverse(char str[])
{
    int i, length = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    for (i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}

int main()
{
    char str[100];

    printf("Enter your String: ");
    scanf("%s", str);

    printf("Reverse String: ");
    reverse(str);

    return 0;
}