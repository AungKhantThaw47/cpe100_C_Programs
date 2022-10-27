#include<stdio.h>
#include<math.h>

int isPrime(int checkNum);

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int base = num/2;
    for (int i = 2; i <= base; i++)
    {
        if(isPrime(i)&&isPrime(num-i))
        {
            printf("%d = %d + %d\n",num,i,(num-i));
        }
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