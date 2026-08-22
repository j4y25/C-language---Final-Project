#include <stdio.h>

int main()
{

    int arr[5] = {10, 20, 30, 40, 50};
    int largest = arr[0];
    int i;

    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        }
    printf("Here the Largest element of an array = %d", largest);

    return 0;
}