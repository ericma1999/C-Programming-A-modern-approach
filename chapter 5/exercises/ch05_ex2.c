





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
    int i = 10;
    int j = 5;

    printf("a %d \n", (!i) < j);
}


void two() {
    int i = 2;
    int j = 1;

    printf("b %d\n", (!!i) + (!j));
}

void three(){
    int i = 5;
    int j = 0;
    int k = -5;

    printf("c %d\n", (i && j) || k);
}

void four(){
    int i = 1;
    int j = 2;
    int k = 3;

    printf("d %d\n", i < j || k);
}