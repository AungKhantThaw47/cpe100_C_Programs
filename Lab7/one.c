#include<stdio.h>
#include<math.h>

int isPrime(int num);

int main(){
    int lower,higher;
    scanf("%d",&lower);
    scanf("%d",&higher);
    int isPresent = 0;
    for (int i = lower; i <= higher; i++)
    {
        if(isPrime(i)==1){
            isPresent = 1;
            printf("%d\n",i);
        }
    }
    if(isPresent==0)
    {
        printf("None");
    }
}

int isPrime(int num){
    int root = sqrt(num);
    if(num<=1){
        return 0;
    }
    for (int i = root; i > 1; i--)
    {
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}