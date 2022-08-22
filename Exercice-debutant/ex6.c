#include <stdio.h>

int main(void)
{
    int nb1;

    printf("Nombre :\n");
    scanf("%d", &nb1);

    for (int i =0; i <= nb1;i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }



    return 0;
}