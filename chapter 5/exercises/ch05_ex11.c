




#include <stdio.h>


int main (){



    int areaCode = 404;

    switch (areaCode)
    {
    case 229: printf("Albany"); break;
    case 404: case 470: case 678: case 770: printf("Atlanta"); break;
    case 478: printf("Macon"); break;
    case 706: case 762: printf("Columbus"); break;
    case 912: printf("Savannah"); break;
    default:
        printf("Area code not recognized");
        break;
    }




    return 0;
}