/*
 * c3p6.c
 * Eric Ma
 * 5 Oct 2020
 * C Programming: A Modern Approach, Second Edition
 * Chapter 3 Programming Project 6
 * Modify the addfrac.c program of Section 3.2
 * so that the user enters both fractions at the
 * same time, separated by a plus sign
 *
 * Enter two fractions separated by a plus sign: 5/6+3/4
 * The sum is 38/24
 *
 *
 * Original Program:
 *
 * int num1, denom1, num2, denom2, result_num, result_denom;

    printf("Enter first fraction: ");
    scanf("%d/%d", &num1, &denom1);

    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;

    result_denom = denom1 * denom2;
    printf("The sum is %d/%d\n", result_num, result_denom);
 *
 */


#include <stdio.h>

int main() {
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;

    result_denom = denom1 * denom2;
    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
}
