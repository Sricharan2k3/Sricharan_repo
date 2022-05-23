#include <stdio.h>

int main()
{
    printf("Hello World\n");

    int k;

    for (
        k = 0; k < 20; k++)

    {
        printf("%d\n", k);
    }

    int i, j;
    for (
        i = 0, j = 0; i<5; i++, j++
        )
    {
        printf("%d %d\n", i, j);
    }

    return 0;
}
