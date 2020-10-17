/*
 * c5p1.c
 * Eric Ma
 * 17 Oct 2020
 * C Programming: A Modern Approach, Second Edition
 * Write a program that calculates how many digits a number contains
 * Enter a number: 374
 * The number 374 has 3 digits
 * 
*/


#include <stdio.h>


int main(){

    int number;

    printf("Enter a number: ");
    scanf("%d", &number);


    printf("The number %d has ", number);

    if (number >= 0 && number <= 9){
        printf("1 digit");
    }else if (number >= 10 && number <= 99){
        printf("2 digits");
    }else {
        printf("3 digits");
    }

    return 0;
}




