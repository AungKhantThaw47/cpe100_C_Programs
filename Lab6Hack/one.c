#include<stdio.h>

int main(){
    int length;
    scanf("%d",&length);
    int arr[length];
    for (int i = 0; i < length; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = length-1; i >=0; i--)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}