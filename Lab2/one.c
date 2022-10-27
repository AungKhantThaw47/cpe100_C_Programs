#include <stdio.h>

int main()
{
    float InNum;
    int OutNum;
    printf("Enter a float number: ");
    scanf("%f",&InNum);
    OutNum = (int) InNum;
    printf("Integer Number: %d",OutNum);
    return 1;
}