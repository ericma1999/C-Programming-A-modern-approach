#include <stdio.h>


/*
* The program will print 10 5 3 2 then print 1 endlessly. Since it will always increment (2+1) / 2 = 1
*
*/

int main(){

    for (int i = 10; i >= 1; i/=2)
    {
        printf("%d", i++);
    }
    


    return 0;
}