#include <stdio.h>



int gcd(int n, int m);

int main (){
    int d1, d2;
    printf("Enter a fraction ");
    scanf("%d/%d", &d1, &d2);

    int divisor = gcd(d1,d2);

    printf("In lowest terms: %d/%d", d1 / divisor, d2/divisor);

}



int gcd(int n, int m){
     while(n != 0){
        int remainder = m % n;
        m = n;
        n = remainder;
    }
    return m;

}

