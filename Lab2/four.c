#include <stdio.h>

int main(){
    int num;
    char out;
    printf("Enter a number from 65 to 90: ");
    scanf("%d",&num);
    out = (char)num;
    printf("%c",out);
    return 1;
}