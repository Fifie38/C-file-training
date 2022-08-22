#include <stdio.h>

int main(void)
{
    int nb1,nb2;
    printf("Nombre 1 : \n");
    scanf("%d",&nb1);

    printf("Nombre 2 : \n");
    scanf("%d", &nb2);

    if (nb2 == 0)
    {
        printf("Erreur : division par 0");
    }
    else
    {
        float nb3 = nb1 / nb2;
        printf("Le resultat est : %f\n", nb3 );
    }


    return 0;
}