#include <stdio.h>



int main(){


    float input, largest;


    printf("Enter a number: ");
    scanf("%f", &input);
    largest = input;

    while (input != 0)
    {
        printf("Enter a number: ");
        scanf("%f", &input);

        if (input > largest){
            largest = input;
        }
    }

    printf("The largest number enetered was %.2f", largest);
    



    return 0;
}