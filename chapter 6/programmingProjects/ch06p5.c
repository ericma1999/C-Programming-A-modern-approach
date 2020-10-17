#include <stdio.h>




int main(void){

    int input;

    printf("Enter your number: ");
    scanf("%d",&input);


    do
    {
        printf("%d", input % 10);
        input /= 10;
    } while (input != 0);
    



    return 0;
}