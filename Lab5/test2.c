#include <stdio.h>
#include <math.h>

int main()
{
    long num;
    printf("Enter binary number: ");
    scanf("%ld",&num);
    int counter = 1;
    int temp = num;
    temp = num;
    int count = 0;
    int base = 0;
    while (temp/10>0)
    {
        printf("%d",temp%10);
        count++;
        temp = temp/10;
    }
    printf("%d",temp%10);
    // base += pow(2,count);
    // printf("\nFinal %d",base);
}