#include <stdio.h>

int main(void)
{
    int nb_exemplaires;
    float prix, prix_ht, prix_tva, prix_ttc;
    const float TVA = 0.2;

    printf("Prix : \n");
    scanf("%f", &prix);

    printf("Nombre d'exemplaires : \n");
    scanf("%d", &nb_exemplaires);

    prix_ht = prix * nb_exemplaires;
    prix_tva = prix_ht * TVA;
    prix_ttc = prix_ht + TVA;

    printf("Prix total HT : %.2f€\n", prix_ht );
    printf("Prix de la TVA : %.2f€\n", prix_tva);
    printf("Prix TTC : %.2f\n", prix_ttc);

    return 0;
}