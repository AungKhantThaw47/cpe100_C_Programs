#include <stdio.h>

int main(){
    float one,two;
    printf("Enter number one: ");
    scanf("%f",&one);
    printf("Enter number two: ");
    scanf("%f",&two);
    printf("%.2lf",one*two);
    return 1;
}