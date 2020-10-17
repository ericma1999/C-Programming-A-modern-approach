

#include <stdio.h>

void one();
void two();
void three();
void four();

int main(){
    
    one();
    two();
    three();
    four();
    return 0;
}



void one() {
    int i = 2;
    int j = 3;
    int k = i * j == 6;

    printf("a %d\n", k);
}

void two(){

    int i = 5;
    int j = 10;
    int k = 1;
    // true because false = 0 and 0 < 10;
    printf("b %d\n", k > i < j);
}

void three(){
    int i = 3;
    int j = 2;
    int k = 1;

    printf("c %d\n", i < j == j < k);
}

void four() {
    int i = 3;
    int j = 4;
    int k = 5;

    printf("d %d\n", i % j + i < k);
}