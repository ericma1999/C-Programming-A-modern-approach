/*
 * c5p6.c
 * Eric Ma
 * 17 Oct 2020
 * C Programming: A Modern Approach, Second Edition
 * 
 * Finds the largest and smallest of four integers entered by the user
 * Enter four itegers: 21 43 10 35
 * Largest: 43
 * Smallest: 10
*/


#include <stdio.h>


int main(){

    int d1,d2,d3,d4;


    printf("Enter four integers: ");
    scanf("%d %d %d %d", &d1, &d2, &d3, &d4);

    int largest;
    int smallest;

    if ( d1 >= d2){
        largest = d1;
        smallest = d2;
    }else {
        largest = d2;
        smallest = d1;
    }

    if (d3 > largest){
        largest = d3;
    }else if (d3 < smallest){
        smallest = d3;
    }

    if (d4 > largest){
        largest = d4;
    }else if (d4 < smallest){
        smallest = d4;
    }

    printf("Largest %d\n", largest);
    printf("Smallest %d", smallest);

    return 0;
}