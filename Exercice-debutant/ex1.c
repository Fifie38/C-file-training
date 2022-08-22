#include <stdio.h>

int main(void)
{
    int nb1,nb2,nb3;
    printf("Nombre 1 : \n");
    scanf("%d",&nb1);

    printf("Nombre 2 : \n");
    scanf("%d", &nb2);

    nb3 = nb2 * nb1;
    printf("Le resultat est : %d\n", nb3 );


    return 0;
}