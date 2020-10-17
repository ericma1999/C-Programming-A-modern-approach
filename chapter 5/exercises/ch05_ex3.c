

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
    int i = 3;
    int j = 4;
    int k = 5;

    printf("(a)\n");
    printf("%d\n",i < j || ++j < k);
    printf("%d %d %d \n", i, j ,k);
}


void two() {
    int i = 7;
    int j = 8;
    int k = 9;

    printf("(b)\n");
    printf("%d \n", i - 7 && j++ < k);
    printf("%d %d %d \n", i, j, k);
}

void three() {
    int i = 7;
    int j = 8;
    int k = 9;

    printf("(c)\n");
    printf("%d\n", (i = j) || (j = k));
    printf("%d %d %d\n", i, j, k);
}

void four() {
    int i = 1;
    int j = 1;
    int k = 1;

    printf("(d)\n");
    printf("%d\n", ++i || (++j && ++k));
    printf("%d %d %d\n", i, j, k);
}