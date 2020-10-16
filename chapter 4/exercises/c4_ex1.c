



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
    int i = 5;
    int j = 3;

    printf("a %d %d \n", i / j, i % j);
}

void two() {
    int i = 2;
    int j = 3;

    printf("b %d \n", (i + 10) % j);
}

void three() {
    int i = 7;
    int j = 8;
    int k = 9;

    printf("c %d \n", (i + 10) % k / j);
}

void four() {
    int i = 1;
    int j = 2;
    int k = 3;

    printf("d %d", (i+5) % (j + 2) / k);
}