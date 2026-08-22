#include <stdio.h>

int main()
{

    char ch;
    printf("Enter a Character : ");
    scanf("%c ", &ch);

    switch (ch)
    {
    case 'a':
    case 'i':
    case 'e':
    case 'o':
    case 'u':
        printf("Vowel");
        break;

    default:
        printf("Consonant");
        break;
    }

    return 0;
}