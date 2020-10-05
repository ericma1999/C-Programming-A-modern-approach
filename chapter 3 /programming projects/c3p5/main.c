/*
 * c3p5.c
 * Eric Ma
 * 5 Oct 2020
 * C Programming: A Modern Approach, Second Edition
 * Chapter 3 Programming Project 5
 * Write a program that asks the user to enter the numbers from
 * 1 to 16 (in any order) and then displays the numbers in a
 * 4 by 4 arrangement, followed by the sums of the rows, columns,
 * and diagonals
 *
 * 16 3 2 13
 * 5 10 11 8
 * 9  6 7 12
 * 4 15 14 1
 *
 * Row sums: 34 34 34 34 34
 * Column sums: 34 34 34 34
 * Diagonal sums: 34 34
 *
 *
 */

#include <stdio.h>

int main() {

//    let x[1-16] be the input holder

    int x1,x2,x3,x4,x5,x6,x7,x8;
    int x9,x10,x11,x12,x13,x14,x15,x16;

    int sum_row1, sum_row2, sum_row3, sum_row4;

    int sum_column1, sum_column2, sum_column3, sum_column4;

    int diag_sum1, diag_sum2;

    printf("Enter the numbers from 1 to 16 in any order");

    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
          &x1,&x2,&x3,&x4,&x5,&x6,&x7,&x8,&x9,&x10,&x11,&x12,&x13,&x14,&x15,&x16);

    sum_row1 = x1 + x2 + x3 + x4;
    sum_row2 = x5 + x6 + x7 + x8;
    sum_row3 = x9 + x10 + x11 + x12;
    sum_row4 = x13 + x14 + x15 + x16;

    sum_column1 = x1 + x5 + x9 + x13;
    sum_column2 = x2 + x6 + x10 + x14;
    sum_column3 = x3 + x7 + x11 + x15;
    sum_column4 = x4 + x8 + x12 + x16;

    diag_sum1 = x1 + x6 + x11 + x16;
    diag_sum2 = x13 + x10 + x7 + x4;

    printf("\n%2d %2d %2d %2d\n", x1, x2, x3, x4);
    printf("%2d %2d %2d %2d\n", x5, x6, x7, x8);
    printf("%2d %2d %2d %2d\n", x9, x10, x11, x12);
    printf("%2d %2d %2d %2d\n", x13, x14, x15, x16);

    printf("\nRow sums: %2d %2d %2d %2d", sum_row1 , sum_row2, sum_row3, sum_row4);
    printf("\nColumn sums: %2d %2d %2d %2d", sum_column1, sum_column2, sum_column3, sum_column4);
    printf("\nDiagonal sums: %2d %2d", diag_sum1, diag_sum2);

    return 0;
}
