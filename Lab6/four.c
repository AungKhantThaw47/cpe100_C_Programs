#include<stdio.h>
#include<math.h>

int isPrime(int checkNum);

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int count = 0;
    int start = 2;
    while (num/start!=0)
    {
        if(num%start==0&&isPrime(start))
        {
            if(count)
            {
                printf("*");
            }
            count=1;
            printf("%d",start);
            num = num/start;
        }else
        {
            start++;
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