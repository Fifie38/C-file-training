#include <stdio.h>

int main(void)
{
    int nb1;

    printf("Nombre :\n");
    scanf("%d", &nb1);

    if ((nb1 % 2) == 0)
    {
        printf("Nombre pair");
    }
    else
    {
        printf("Nombre impair");
    }


    return 0;
}