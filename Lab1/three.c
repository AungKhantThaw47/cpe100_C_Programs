#include <stdio.h>

int main(){
    int num;
    int diviser = 16;
    int counter = 7;
    char output[8];
    for (int i = 0; i < 8; i++)
    {
        output[i] = '0';
    }
    scanf("%d",&num);
    while (num!=0)
    {
        int temp = num%diviser;
        switch (temp)
        {
        case 10:
            output[counter] = 'A';
            break;
        case 11:
            output[counter] = 'B';
            break;
        case 12:
            output[counter] = 'C';
            break;
        case 13:
            output[counter] = 'D';
            break;
        case 14:
            output[counter] = 'E';
            break;
        case 15:
            output[counter] = 'F';
            break;
        default:
            output[counter] = temp + '0';
            break;
        }
        
        num = num/diviser;
        counter--;
    }
    for (int i = 0; i < 8; i++)
    {
        printf("%c",output[i]);
    }
    
    return 1;
}