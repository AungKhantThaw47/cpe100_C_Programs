#include<stdio.h>
#include<math.h>

int isPrime(int checkNum);

int main(){
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    printf("%d",isPrime(num));
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