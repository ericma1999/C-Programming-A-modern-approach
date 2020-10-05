/*
 * c3p5.c
 * Eric Ma
 * 5 Oct 2020
 * C Programming: A Modern Approach, Second Edition
 * Write a program that accepts a date from the user in the form mm/dd/yyyy
 * and then displays it in the form yyyymmdd
 *
 * Enter a date (mm/dd/yyyy): 2/17/2011
 * You entered the date 20110217
 *
*/


#include <stdio.h>

int main() {
    int month, day, year;
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("%4d%02d%2d", year, month, day);
    return 0;
}
