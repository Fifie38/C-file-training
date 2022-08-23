#include <stdio.h>

float calculPrixTTC(float prixHT, float TVA);

int main(void)
{
    float TVA = 0.2;
    float prixHT;

    printf("Le prix : \n");
    scanf("%f", &prixHT);

    printf("Prix total %f€\n", calculPrixTTC(prixHT,TVA));

}

float calculPrixTTC(float prixHT, float TVA)
{
    return prixHT + prixHT*TVA;
}