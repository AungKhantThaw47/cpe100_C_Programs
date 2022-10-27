#include<stdio.h>
#include<stdlib.h>

#define LEFT 0
#define RIGHT 1

int Recur(int arr[],int length,int LorR);

int main(){
    int inNum;
    scanf("%d",&inNum);
    int arr[inNum];
    for (int i = 0; i < inNum; i++)
    {
        arr[i] = i+1;
    }
    printf("%d",Recur(arr,inNum,LEFT));
    return 0;
}

int Recur(int arr[],int length,int LorR){
    // printf("Length: %d : LEFT/RIGHT %d\n",length,LorR);
    // for (int i = 0; i < length; i++)
    // {
    //     printf("%d\n",arr[i]);
    // }
    // printf("\n\n");
    if (length==1)
    {
        return arr[0];
    }
    int newLen = length/2;
    int* ptr = (int*)malloc(newLen*sizeof(int));
    int starter;
    if (LorR==LEFT)
    {
        for (int i = 0; i < length; i+=2)
        {
            ptr[(i+1)/2]=arr[i+1];
        }
        return Recur(ptr,newLen,RIGHT);
    } else
    {
        for (int i = length-1; i >0; i-=2)
        {
            ptr[(i-1)/2]=arr[i-1];
        }
        return Recur(ptr,newLen,LEFT);
    }
}