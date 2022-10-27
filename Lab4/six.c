#include<stdio.h>

int main(){
    int num;
    float base = 0;
    int counter = 0;
    printf("Enter number: ");
    scanf("%d",&num);
    while (num!=0)
    {
        base += num;
        counter++;
        printf("Enter number: ");
        scanf("%d",&num);
    }
    printf("%.2f",(base/counter));
    return 1;
}