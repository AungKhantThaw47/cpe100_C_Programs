#include<stdio.h>
#include<math.h>

int isPerfect(int num);

int main(){
    int lower,higer;
    scanf("%d",&lower);
    scanf("%d",&higer);
    int isPresent = 0;
    for (int i = lower; i <= higer; i++)
    {
        if (isPerfect(i)==1)
        {
            isPresent = 1;
            printf("%d\n",i);
        }
        
    }
    if(isPresent==0)
    {
        printf("None");
    }
    return 0;
}

int isPerfect(int num){
    if(num<=1){
        return 0;
    }
    int root = sqrt(num);
    int sum = 1;
    for (int i = root; i > 1; i--)
    {
        if(num%i==0){
            sum += (i+(num/i));
        }
    }
    if(num==sum){
        return 1;
    }
    return 0;
}