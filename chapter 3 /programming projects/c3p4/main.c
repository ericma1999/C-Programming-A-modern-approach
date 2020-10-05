/*
 * c3p4.c
 * Eric Ma
 * 5 Oct 2020
 * C Programming: A Modern Approach, Second Edition
 * Chapter 3 Programming Project 4
 * Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
 * You entered 404.817.6900
 */



#include <stdio.h>

int main() {
    int pre, s2, d3;
    printf("Enter a phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &pre, &s2, &d3);

    printf("%d.%d.%d", pre, s2, d3);
    return 0;
}
