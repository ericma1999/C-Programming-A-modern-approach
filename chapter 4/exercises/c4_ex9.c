

#include <stdio.h>


void one();

void two();

void three();

void four();

int main () {

    one();
    two();
    three();
    four();

    return 0;
}

void one() {
    int i = 7;
    int j = 8;

    i *= j + 1;

    printf("a %d %d \n", i ,j);
    
}

void two() {
    int j, k;
    int i = j = k = 1;

    i += j += k;

    printf("b %d %d %d \n", i, j, k);

}

void three() {
    int i = 1;
    int j = 2;
    int k = 3;

    i -= j -= k;

    printf("c %d %d %d \n", i, j, k);
}

void four() {
    int i = 2;
    int j = 1;
    int k = 0;
    i *= j *= k;

    printf("d %d %d %d", i, j, k);

}