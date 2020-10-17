/*
 * c5p1.c
 * Eric Ma
 * 17 Oct 2020
 * C Programming: A Modern Approach, Second Edition
 * Write a program that asks the user for a 24-hour time then displays the time in 12-hour form
 * Enter a 24 hour time: 21:11
 * Equivalent 12-hour time: 9:11 PM
 * 
*/


#include <stdio.h>


int main(){

    int hour, minutes;


    printf("Enter a 24 hour time: ");
    scanf("%2d:%2d", &hour, &minutes);

    printf("Equivalent 12-hour time: ");

    if(hour == 12){
        printf("%d:%d PM", hour, minutes);
    }else if (hour == 0){
        printf("%d:%d AM", 12, minutes);
    }else if(hour > 12){
        printf("%d:%d PM", hour - 12, minutes);
    }else {
        printf("%d:%d AM", hour, minutes);
    }

}




