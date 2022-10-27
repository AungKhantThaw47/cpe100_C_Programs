#include <stdio.h>

int main(){
    int num;
    int diviser = 2;
    int counter = 15;
    char output[16];
    for (int i = 0; i < 16; i++)
    {
        output[i] = '0';
    }
    scanf("%d",&num);
    while (num!=0)
    {
        output[counter] = num%diviser + '0';
        num = num/diviser;
        counter--;
    }
    for (int i = 0; i < 16; i++)
    {
        printf("%c",output[i]);
    }
    
    return 1;
}