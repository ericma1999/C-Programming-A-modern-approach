/*
 * c5p8.c
 * Eric Ma
 * 17 Oct 2020
 * C Programming: A Modern Approach, Second Edition
 * Asks the user to enter a time (expressed in hours and minutes, using the 24-hour clock)
 * The program then displays the departure and arrival times for the flight whose departure time is cloeset to that entered by the user
 * 
*/

#include <stdio.h>


int main(){

    int input_time, hour, minute, d1= (8 * 60), d2 = (9 * 60) + 43, d3 = (11 * 60) + 19, d4 = (12 * 60) + 47, d5=(14 * 60), d6 = (15 * 60) + 45, d7 = (19 * 60), d8 = (21 * 60) + 45;


    printf("Enter a 24 hour time: ");
    scanf("%d:%d", &hour, &minute);

    input_time = (hour * 60) + minute;

    if (input_time < d1 + (d2-d1) / 2){
        printf("Closest departure time is 8:00AM, arriving at 10:16AM");
    }else if(input_time < d2 + (d3 - d2) / 2){
        printf("Closest departure time is 9:43AM, arrinving at 11:52AM");
    }else if (input_time < d3 + (d4-d3) /2){
        printf("Closest departure time is 11:19 AM, arriving at 1:31PM");
    }else if (input_time < d4 + (d5-d4)){
        printf("Closest departure time is 12:47PM, arriving at 3:00PM");
    }else if (input_time < d5 + (d6-d5)){
        printf("Closest departure time is 2:00PM, arriving at 4:08pm");
    }else if (input_time < d6 + (d7 - d6)){
        printf("Closest departure time is 3:45PM, arriving at 5:55PM");
    }else if (input_time < d7 + (d8 - d7)){
        printf("Closest departure time is 7:00PM, arriving at 9:20PM");
    }else {
        printf("Cloeset departure time is 9:45PM, arriving at 11:58PM");
    }



    return 0;
}