#include <stdio.h>

int estImpair(int nb);

int main(void)
{
    int nb;
    printf("Nombre: \n");
    scanf("%d", &nb);
    if(estImpair(nb) == 0)
    {
        printf("Nombre pair");
    }
    else
    {
        printf("Nombre impair");
    }
}

int estImpair(int nb)
{
    return nb % 2;
}