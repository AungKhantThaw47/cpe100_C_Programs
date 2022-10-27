#include<stdio.h>

void Move(int* arr,int length,int toMove,int store);

int main(){
    int inNum,nextNum;
    scanf("%d",&inNum);
    int arr[inNum];
    for (int i = 0; i < inNum; i++)
    {
        scanf("%d",&arr[i]);
    }
    Move(arr,inNum,inNum,arr[0]);
    // printf("Final\n");
    for (int i = 0; i < inNum; i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}

void Move(int* arr,int length,int toMove,int store){
    // printf("Length: %d , ToMove: %d , Store: %d\n",length,toMove,store);
    // for (int i = 0; i < length; i++)
    // {
    //     printf("%d\n",arr[i]);
    // }
    // printf("\n\n");
    if (toMove==1)
    {
        // printf("Assigned Location: %d\n",(length-toMove));
        arr[length-toMove] = store;
    } else
    {
        // printf("Assigned Location: %d , from %d\n",(length-toMove),(length-toMove+1));
        arr[length-toMove] = arr[length-toMove+1];
        toMove--;
        Move(arr,length,toMove,store);
    }
}