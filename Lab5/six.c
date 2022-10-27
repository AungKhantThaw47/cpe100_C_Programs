#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    int counter = 1;
    int temp = num;
    temp = num;
    int count = 0;
    int base = 0;
    while (temp/10>0)
    {
        // printf("%d",temp%10);
        base = (base*10)+temp%10;
        count++;
        temp = temp/10;
    }
    // printf("%d",temp%10);
    base = (base*10)+temp%10;
    if (base==num)
    {
        printf("%d is a palindrome number.",num);
    }
    else
    {
        printf("%d is not a palindrome number.",num);
    }
}