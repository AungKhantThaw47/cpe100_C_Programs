#include <stdio.h>

int main(){
    int num1,num2;
    printf("Enter number1: ");
    scanf("%d",&num1);
    printf("Enter number2: ");
    scanf("%d",&num2);
    if(num1%num2==0||num2%num1==0){
        if(num1>num2){
            printf("%d",num2);
        }else{
            printf("%d",num1);
        }
        return 1;
    }
    int base = 1;
    int divider = 2;
    int flag = 1;
    while (flag==1)
    {
        if (num1%divider==0&&num2%divider==0)
        {
            base = base * divider;
            num1 = num1/divider;
            num2 = num2/divider;
        } else if(divider>=num1||divider>=num2){
            flag = 0;
            printf("%d",base);
            return 1;
        } else {
            divider++;
        }
    }
    return 1;
}