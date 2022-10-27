#include<stdio.h>
#include<math.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int base=0;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            base += 9*pow(10,j);
        }
    }
    printf("Output: %d",base);
    return 1;
}