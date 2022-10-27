#include <stdio.h>

int main(){
    char InputData;
    int Process;
    printf("Enter a character: ");
    scanf("%c",&InputData);
    Process = (int)InputData;
    printf("%d",Process);
    if(Process>=48&&Process<=57){
        printf("\nDigit");
    } else if ((Process>=65&&Process<=90)||(Process>=97&&Process<=122))
    {
        printf("\nAlphabet");
    } else
    {
        printf("\nSpecial character");
    }
    return 1;
}