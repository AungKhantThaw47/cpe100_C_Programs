#include<stdio.h>

int main(){
    int length;
    scanf("%d",&length);
    int arr[length];
    scanf("%d",&arr[0]);
    int peak = arr[0];
    int peakIndex = 0;
    for (int i = 1; i < length; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>peak&&i==peakIndex+1)
        {
            peak = arr[i];
            peakIndex++;
        }
    }
    printf("%d",peakIndex);
    return 0;
}