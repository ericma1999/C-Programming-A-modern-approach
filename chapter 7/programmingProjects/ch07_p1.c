/*
 * c7p1.c
 * Eric Ma
 * 23 Oct 2020
 * C Programming: A Modern Approach, Second Edition
 * 
 * The square2.c program of section 6.3 will fail if i * i exceeds the maximum int value.
 * Run the program and determine the smallest value of n that cuases failure. Try chaning the type of i to short and running the program again.
 * 
*/
#include <stdio.h>

int main(void)
{
    int n;
    short i;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);


    for (i = 1; i <= n; i++) {
        printf("%15hd%15d\n", i, (short) i * i);

        if (((short) i * i) < 0)
            break;
    }

    return 0;
}


/*
 *
 * When is is assigned to short, the int is assigned to 16 bit
 * interesting link: https://stackoverflow.com/questions/24371868/why-must-a-short-be-converted-to-an-int-before-arithmetic-operations-in-c-and-c
 * 
 * 
 * When i is int, overflows at between 46340 ^ 2 and 46341 ^ 2. This means that int is assigned to 32 bits 
 * 
 * When is is long, it exceeds 4000000^2 and does not overflow. This means that int is assigned to 64 bits
 * 
*/