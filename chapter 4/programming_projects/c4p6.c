/*
 * c4p6.c
 * Eric Ma
 * 16 Oct 2020
 * C Programming: A Modern Approach, Second Edition
 * Write an program that accepts EAN and calculate the check digit
*/


#include <stdio.h>
int main() {
    int d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11,d12;

    printf("Please enter the first twelve digit of your EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11, &d12);

    int first_sum = d2 + d4 + d6 + d8 + d10 + d12;
    int second_sum = d1 + d3 + d5 + d7 + d9 + d11;

    int total = (3 * first_sum) + second_sum;
    int result = 9 - ((total - 1) % 10);

    printf("Check digit: %d", result);


    return 0;
}
