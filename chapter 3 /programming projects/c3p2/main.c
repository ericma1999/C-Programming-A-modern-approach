/*
 * c3p2.c
 * Eric Ma
 * 5 Oct 2020
 * C Programming: A Modern Approach, Second Edition
 * Chapter 3 Programming Project 1
 * Write a program that formats product information entered by the user.
 * A session with the program should look like this:
 *
 * Enter item number: 583
 * Enter unit price: 13.5
 * Enter purchase date (mm/dd/yyyy): 10/24/2010
 *
 * Item     Unit        Purchase
 *          Price       Date
 * 583      $ 13.50     10/24/2010
 *
 *
 */


#include <stdio.h>

int main() {
    int itemNo;
    double price;
    int day, month, year;

    printf("Enter item number: ");
    scanf("%d", &itemNo);

    printf("Enter unit price: ");
    scanf("%lf", &price);

    printf("Enter the purchase date (mm/dd/yyyy): ");
    scanf("%02d/%02d/%4d", &day, &month, &year);

    printf("\nItem\t\tUnit\t\tPurchase\n\t\t\tPrice\t\tDate\n");
    printf("%d\t\t\t$%7.2f\t%.2d/%.2d/%d\n\n", itemNo, price, month, day, year);
    return 0;
}
