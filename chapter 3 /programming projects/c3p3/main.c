/*
 * c3p3.c
 * Eric Ma
 * 5 Oct 2020
 * C Programming: A Modern Approach, Second Edition
 * Chapter 3 Programming Project 3
 * Books are identified by an ISBN
 * Write a program that breaks down an ISBN entered by the user:
 *
 * Enter ISBN: 978-0-393-97950-3
 * GS1 prefix: 978
 * Group identifier: 0
 * Publisher code: 393
 * Item number: 97950
 * Check digit: 3
 *
 */


#include <stdio.h>

int main() {

    int gs_predix, group_identifier, publiser_code, item_number, check_digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs_predix, &group_identifier, &publiser_code, &item_number, &check_digit);

    printf("\nGS1 prefix: %d", gs_predix);
    printf("\nGroup identifier: %d", group_identifier);
    printf("\nPublisher code: ", publiser_code);
    printf("\nItem number: %d", item_number);
    printf("\nCheck digit: %d", check_digit);



    return 0;
}
