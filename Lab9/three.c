#include<stdio.h>

void simpleSort(int *arrayD,int length);

int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d",&arr[i]);
    }
    simpleSort(arr,num);
    for (int i = 0; i < num; i++)
    {
        printf("%d\n",arr[i]);
    }
    
    return 0;
}

void simpleSort(int *arrayD,int length){
    int *firstPtr = arrayD;
    int *lastPtr = arrayD+length;
    for (; firstPtr < lastPtr-1; firstPtr++)
    {
        int *secondPtr = firstPtr+1;
        for (; secondPtr < lastPtr; secondPtr++)
        {
            if(*firstPtr>*secondPtr){
                int temp = *firstPtr;
                *firstPtr = *secondPtr;
                *secondPtr = temp;
            }
        }
        
    }
    // for (int i = 0; i < len; i++)
    // {
    //     printf("%f\n",arr[i]);
    // }
}