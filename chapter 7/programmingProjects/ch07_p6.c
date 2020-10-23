/*
 * c7p6.c
 * Eric Ma
 * 23 Oct 2020
 * C Programming: A Modern Approach, Second Edition
 * 
 * Write a program that prints the values of different dta types
 * 
 * 
*/

#include <stdio.h>


int main(void){


    printf("size of short is %zu bytes\n", sizeof(short)); 
    printf("size of int is %zu bytes\n", sizeof(int));
    printf("size of long is %zu bytes\n", sizeof(long));
    printf("size of float is %zu bytes\n", sizeof(float));
    printf("size of double is %zu bytes\n", sizeof(double));
    printf("size of long double is %zu bytes\n", sizeof(long double));


    return 0;
}