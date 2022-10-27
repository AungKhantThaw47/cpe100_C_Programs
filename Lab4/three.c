#include<stdio.h>
#include<math.h>

int isPrime(int checkNum);

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num<2)
    {
        return 1;
    }
    if(num==2)
    {
        printf("2");
        return 1;
    }
    int counter = 0;
    for (int i = 2; i < num; i++)
    {
        if(isPrime(i))
        {
            printf("%d ",i);
            counter++;
            if(counter%10==0)
            {
                printf("\n");
            }
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