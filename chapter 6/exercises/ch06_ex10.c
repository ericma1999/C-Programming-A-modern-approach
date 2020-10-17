#include <stdio.h>

int main(){

    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        if (i % 2) goto end;
        sum+=1;
        end: ;
    }

    printf("%d\n", sum);
    

    return 0;
}