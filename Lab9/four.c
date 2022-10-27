#include<stdio.h>

void ProcessArray(int *arrayD,int length);

int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d",&arr[i]);
    }
    ProcessArray(arr,num);
    for (int i = 0; i < num; i++)
    {
        printf("%d\n",arr[i]);
    }
    
    return 0;
}

void ProcessArray(int *arrayD,int length){
    int *firstPtr = arrayD;
    int *lastPtr = arrayD+length;
    for (; firstPtr < lastPtr; firstPtr++)
    {
        if (*firstPtr==0)
        {
            int *toShift = lastPtr-1;
            for (; toShift > firstPtr+1; toShift--)
            {
                *toShift = *(toShift-1);
            }
            *(firstPtr+1) = 0;
            firstPtr++;
        }
    }
}