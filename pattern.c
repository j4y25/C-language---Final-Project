#include <stdio.h>

int main()
{

    int i, sum;

    for (int i = 1; i <= 5; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            sum = i * i;
            printf("%d ", sum);
        }
        printf("\n");
    }

    return 0;
}