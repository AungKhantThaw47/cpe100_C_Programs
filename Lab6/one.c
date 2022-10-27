#include<stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Summation: %d\n",((num*(1+num))/2));
    int base = 1;
    for (int i = num; i >0; i--)
    {
        base = base * i;
    }
    printf("n!: %d",base);
    return 1;
}