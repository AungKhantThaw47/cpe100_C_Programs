#include<stdio.h>
#include<stdlib.h>

int CompareFunction (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(){
    int len;
    scanf("%d",&len);
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        scanf("%d",&arr[i]);
    }
    qsort(arr, len, sizeof(int), CompareFunction);
    int zeroCounter = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i]==0)
        {
            zeroCounter++;
        }
        else
        {
            printf("%d",arr[i]);
            if(zeroCounter>0)
            {
                for (int i = 0; i < zeroCounter; i++)
                {
                    printf("0");
                }
                zeroCounter=0;
            }
        }
    }
    return 0;
}

