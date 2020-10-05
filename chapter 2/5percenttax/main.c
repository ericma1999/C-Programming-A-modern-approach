#include <stdio.h>

int main()
{
    float original_amount;

    printf("Enter an amount: ");
    scanf("%f", &original_amount);
    printf("With tax added: $%.2f\n", original_amount * 1.05f);

    return 0;
}
