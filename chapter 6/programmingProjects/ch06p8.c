

#include <stdio.h>


int main(void){
    int days, day;

    printf("Enter number of days in month: ");
    scanf("%d", &days);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &day);

    int currentDay = 1;

    for (int i = 1; i <= (days + day - 1); i++)
    {

        if ( i > day - 1){
            printf("%3d", currentDay++);
        }else {
            printf("   ");
        }
    
        if(i % 7 == 0){
            printf("\n");
        }
    }
    




    return 0;
}