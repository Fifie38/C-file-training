#include <stdio.h>

int main(void)
{
    int nb1;
    int essai = 1;
    printf("Combien font 2 x 2? :\n");
    scanf("%d", &nb1);

    while (nb1 != 4)
    {
        printf("Faux recommencer\n");
        printf("Combien font 2 x 2? :\n");
        scanf("%d", &nb1);
        essai++;
    }

    printf("Bravo, au bout de %d essais !",essai);


    return 0;
}