/*
 * c4p2.c
 * Eric Ma
 * 16 Oct 2020
 * C Programming: A Modern Approach, Second Edition
 * Write a program that asks the user to enter a three-digit number, then prints the number with
 * its digits reversed.
 * Enter a two digit number: 281
 * The reversal is: 182
 *
*/


#include <stdio.h>

int main(){

    int d1, d2, d3;

    printf("Enter a three digit number: ");
    scanf("%1d%1d%1d", &d1, &d2, &d3);

    printf("The reversal is %d%d%d", d3, d2, d1);

    return 0;
}