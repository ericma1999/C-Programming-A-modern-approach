#include <stdio.h>





int main(){

    int n = 5;
    for (int d = 2; d * d < n; d++)
    {
        if (n % d == 0){
            break;
        }
    }
    
    return 0;
}