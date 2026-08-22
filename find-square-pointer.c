#include <stdio.h>

int main()
{

    int arr[5] = {10, 20, 30, 40, 50};
    int *p;
    int i;

    p = arr;

    printf("Here the square of an array element\n");

    for (int i = 1; i <= 5; i++)
    {
        printf("%d \n", (*p) * (*p));
        p++;
    }

    return 0;
}