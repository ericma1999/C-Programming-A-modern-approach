/*
 * c4p1.c
 * Eric Ma
 * 16 Oct 2020
 * C Programming: A Modern Approach, Second Edition
 * Write a program that asks the user to enter a two-digit number, then prints the number with
 * its digits reversed.
 * Enter a two digit number: 28
 * The reversal is: 82
 *
*/


#include <stdio.h>

int main(){

    int d1, d2;

    printf("Enter a two digit number: ");
    scanf("%1d%1d", &d1, &d2);

    printf("The reversal is %d%d", d2, d1);

    return 0;
}