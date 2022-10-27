#include <stdio.h>

int main(){
    int one;
    int two;
    int outQuotient;
    int outRemainder;
    printf("Enter NumberOne: ");
    scanf("%d",&one);
    printf("Enter NumberTwo: ");
    scanf("%d",&two);
    outQuotient = one/two;
    outRemainder = one%two;
    printf("Quotient: %d",outQuotient);
    printf("Remainder: %d",outRemainder);
    return 1;
}