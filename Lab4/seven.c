#include<stdio.h>
#include<math.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (isPrime(num))
    {
        printf("%d is a prime number.",num);
    } else
    {
        printf("%d is not a prime number.",num);
    }
    return 1;
}

int isPrime(int checkNum){
    int base = sqrt(checkNum);
    for (int i = base; i > 1; i--)
    {
        if(checkNum%i==0)
        {
            return 0;
        }
    }
    return 1;
}