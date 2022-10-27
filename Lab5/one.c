#include <stdio.h>
#include <math.h>

int main()
{
    long num;
    printf("Enter binary number: ");
    scanf("%ld",&num);
    int counter = 1;
    int count = 0;
    int base = 0;
    for (int i = num;i/10>0;i=i/10)
    {
        base += (i%10)*pow(2,count);
        count++;
    }
    base += pow(2,count);
    printf("\nFinal %d",base);
}