#include<stdio.h>

void RecurShow(int num);

int main(){
    int num;
    scanf("%d",&num);
    RecurShow(num);
    return 0;
}

void RecurShow(int num){
    if(num<2)
    {
        printf("%d",num);
        return;
    }
    int quotient = num/2;
    int remainder = num%2;
    if(quotient<2){
        printf("%d",quotient);
    } else {
        RecurShow(quotient);
    }
    printf("%d",remainder);
}