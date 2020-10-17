#include <stdio.h>

int factorial (int i)
{
    if (i==0)
        return 1;
    else
        return i*factorial(i-1);
}


int main(void){

    int n;
    float approximation = 1.0f;
    printf("input the value n to calculate value of e: ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        // make sure type of float, since float / int => returns float
        approximation += 1.0f / factorial(i);
    }

    printf("%f", approximation);



    return 0;
}