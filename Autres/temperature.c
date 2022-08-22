#include <stdio.h>

int main(void)
{
    int temperature = 0;
    do
    {
        printf("Quelle temperature choisir? : \n");
        scanf("%d", &temperature);
        switch (temperature) {
            case 2 :
                printf("Il fait froid!\n");

                break;
            case 5 :
                printf("il fait toujours froid!\n");
                break;
            case 25 :
                printf("La temperature est bonne!\n");
                break;
            case 35 :
                printf("il fait trop chaud!\n");
                break;
            default:
                printf("La temperature est de %d!C\n",temperature);
        }
    }while(1);

    return 0;
}