/*
 * c7p5.c
 * Eric Ma
 * 23 Oct 2020
 * C Programming: A Modern Approach, Second Edition
 * 
 * Write a program to compute the value of a word by summing the values of its letters
 * 
 * 
*/

#include <stdio.h>
#include <ctype.h>

int char_score(int character);

int main(void)
{
    printf("Enter a word");
    char ch;
    int score = 0;

    while ((ch = toupper(getchar())) != '\n')
    {
        score += char_score(ch);
    }

    printf("%i", score);
    return 0;
}

int char_score(int character)
{
    switch (character)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'L':
    case 'N':
    case 'O':
    case 'R':
    case 'S':
    case 'T':
    case 'U':
        return 1;
    case 'D':
    case 'G':
        return 2;
    case 'B':
    case 'C':
    case 'M':
    case 'P':
        return 3;
    case 'F':
    case 'H':
    case 'V':
    case 'W':
    case 'Y':
        return 4;
    case 'K':
        return 5;
    case 'J':
    case 'X':
        return 8;
    case 'Q':
    case 'Z':
        return 10;
    default:
        return 0;
    }
}