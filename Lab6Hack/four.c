#include<stdio.h>

int main(){
    int length;
    scanf("%d",&length);
    int arr[length];
    int max = 0;
    int index;
    for (int i = 0; i < length && i<100; i++)
    {
        scanf("%d",&arr[i]);
        if((arr[i]>=max)&&(arr[i]>=1))
        // if(arr[i]>max)
        {
            max = arr[i];
            index = i;
        }
    }
    if (max==0)
    {
        printf("%d\n%d",arr[0],0);
    }
    else
    {
        printf("%d\n%d",max,index);
    }
    return 0;
}