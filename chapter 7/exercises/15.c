
/*
* Use typedef to create types named Int8, Int16, Int32. Define the types so that they represent
* 8-bit, 16-bit and 32-bit integers on your machine
*/

#include <stdio.h>
#include <stdint.h>

typedef int8_t Int8;
typedef int16_t Int16;
typedef int32_t Int32;

int main(void){

    printf("The size of int8 is %zu \n", sizeof(Int8));
    printf("The size of int16 is %zu \n", sizeof(Int16));
    printf("The size of int32 is %zu \n", sizeof(Int32));

    return 0;
}