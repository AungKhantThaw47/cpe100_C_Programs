#include <stdio.h>

int main(){
    char InChar;
    char OutChar;
    printf("Input Char: ");
    scanf("%c",&InChar);
    OutChar = (int)InChar - 32;
    printf("Output Char: %c",OutChar);
    return 1;
}