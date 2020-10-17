/*
 * c5p10.c
 * Eric Ma
 * 17 Oct 2020
 * C Programming: A Modern Approach, Second Edition
 * Write a program that converts a numerical grade into a number
 * Use the switch statement
 * 
*/


#include <stdio.h>




int main(){


    int score;



    printf("Enter numerical grade");
    scanf("%d", &score);

    printf("Letter grade: ");
    switch (score / 10)
    {
    case 9: case 10:
        printf("A");
        break;
    case 8:
        printf("B");
        break;
    case 7:
        printf("C");
        break;
    case 6:
        printf("D");
        break;
    case 0: case 1: case 2: case 3: case 4: case 5:
        printf("F");
        break;
    
    default:
        break;
    }



    return 0;
}
