#include <stdio.h>

// the output is 5;

int main(){

    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        if (i % 2) continue;
        sum+=1;
    }

    printf("%d\n", sum);
    

    return 0;
}