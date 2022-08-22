#include <stdio.h>

int main(void)
{
    int nb1;
    int i = 0;

    do {
        printf("(pour quitter saisissez un nombre > 20)\n");
        printf("Saisissez vos notes  :\n");
        scanf("%d", &nb1);
        i++;
    }
    while (nb1 >=0 && nb1 <=20);

    printf("Vous avez enregistre %d notes\n",i);




    return 0;
}