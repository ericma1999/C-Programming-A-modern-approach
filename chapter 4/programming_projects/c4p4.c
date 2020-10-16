/*
 * c4p4.c
 * Eric Ma
 * 16 Oct 2020
 * C Programming: A Modern Approach, Second Edition
 * Write a program that reads the integer entered by the user and displays it in octal
 * Enter a number between 0 and 32767: 1953
 * In octal, your number is: 03641
*/


#include <stdio.h>

int main(){

    int input,d1,d2,d3,d4,d5;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &input);

    d1 = input % 8;
    input /= 8;
    d2 = input % 8;
    input /= 8;
    d3 = input % 8;
    input /= 8;
    d4 = input % 8;
    input /= 8;
    d5 = input % 8;
    input /= 8;

    printf("In octal, your number is: %d%d%d%d%d", d5,d4,d3,d2,d1);


    return 0;
}