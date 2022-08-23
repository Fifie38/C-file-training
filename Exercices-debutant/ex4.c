#include <stdio.h>

int main(void)
{
    int nb1;

    printf("Combien font 2 x 2? :\n");
    scanf("%d", &nb1);

    while (nb1 != 4)
    {
        printf("Faux recommencer");
        printf("Combien font 2 x 2? :\n");
        scanf("%d", &nb1);
    }

    printf("Bonne reponse !");


    return 0;
}