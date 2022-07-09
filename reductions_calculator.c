#include <stdio.h>
#include <cs50.h>

// Basic calculator of reductions

// initialise function reduc()
void reduc(float m, float per);

// main function
int main(void)
{
    int count = get_int("How many reductions? : ");

    for (int i = 0; i < count; i++)
    {
        float price = get_float("Price: ");
        float percent = get_float("Reduc: ");
        reduc(price,percent);
    }

    return 0;
}

// implement function reduc()
void reduc(float m, float per)
{
    per = 1 - (per / 100);
    float new_price = m * per;
    printf("New price : %f\n",new_price);
}