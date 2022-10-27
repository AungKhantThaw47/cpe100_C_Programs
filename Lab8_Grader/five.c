#include<stdio.h>
#include<stdlib.h>

int Recur(int arr[],int length,int next);

int main(){
    int inNum,nextNum;
    scanf("%d",&inNum);
    int arr[inNum];
    for (int i = 0; i < inNum; i++)
    {
        arr[i] = i+1;
    }
    scanf("%d",&nextNum);
    printf("%d",Recur(arr,inNum,nextNum));
    return 0;
}

int Recur(int arr[],int length,int next){
    // printf("Length: %d\n",length);
    // for (int i = 0; i < length; i++)
    // {
    //     printf("%d\n",arr[i]);
    // }
    // printf("\n\n");
    if (length==1)
    {
        return arr[0];
    }
    int roomNoToRemove = (next%length)-1;
    int newLen = length-1;
    int* ptr = (int*)malloc(newLen*sizeof(int));
    int counter = 0;
    for (int i = roomNoToRemove+1; i < length; i++)
    {
        ptr[counter]=arr[i];
        counter++;
    }
    for (int i = 0; i < roomNoToRemove; i++)
    {
        ptr[counter]=arr[i];
        counter++;
    }
    return Recur(ptr,newLen,next);
}