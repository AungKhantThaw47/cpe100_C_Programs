#include<stdio.h>
#include<math.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int base = sqrt(num);
    int sum = 1;
    for (int i = 2; i <= base; i++)
    {
        if (num%i==0)
        {
            sum += (num/i)+i;
        }
        
    }
    if (sum==num)
    {
        printf("%d is a perfect number",num);
    } else
    {
        printf("%d is not a perfect number",num);
    }
    return 1;
}