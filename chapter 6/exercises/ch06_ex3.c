#include <stdio.h>


// i > 0 is always discarded

int main(){
    printf("(3)\n");
    for (int i = 5, j = i - 1; i > 0, j> 0; --i,j = i - 1)
    {
        printf("%d", i);
    }
    
    


    return 0;
}


