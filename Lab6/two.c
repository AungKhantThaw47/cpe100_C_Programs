#include<stdio.h>

int main(){
    int num;
    int one = 1;
    int two = 1;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num==1){
        printf("%d",one);
        return 1;
    }
    if (num==2)
    {
        printf("%d %d",one,two);
        return 1;
    }
    printf("%d %d ",one,two);
    for (int i = 3; i <= num; i++)
    {
        int temp = one+two;
        printf("%d ",temp);
        one = two;
        two = temp;
    }
    return 1;
}