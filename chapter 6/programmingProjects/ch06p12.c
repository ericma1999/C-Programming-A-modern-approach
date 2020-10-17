#include <stdio.h>

// not sure what this question wants me to do

int factorial (int i)
{
    if (i==0)
        return 1;
    else
        return i*factorial(i-1);
}


int main(void){

    float maxFloat;
    float approximation = 1.0f;

    printf("input max float number");
    scanf("%f", &maxFloat);
    int i = 1;
    for (;;)
    {
        // make sure type of float, since float / int => returns float
        if (1.0f / factorial(i) < maxFloat){
            printf("threshold met current approximation is %f\n", approximation);
            break;
        }else {
           approximation += 1.0f / factorial(i);
        }
        i++;
    }

    printf("%f", approximation);



    return 0;
}