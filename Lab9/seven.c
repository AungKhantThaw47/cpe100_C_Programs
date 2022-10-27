#include<stdio.h>
#include<stdlib.h>

void ProcessArrays(int one[],int lengthOne,int two[],int lengthTwo);

int main(){
    int num1,num2;
    scanf("%d",&num1);
    int arr1[num1];
    for (int i = 0; i < num1; i++)
    {
        scanf("%d",&arr1[i]);
    }
    scanf("%d",&num2);
    int arr2[num2];
    for (int i = 0; i < num2; i++)
    {
        scanf("%d",&arr2[i]);
    }
    ProcessArrays(arr1,num1,arr2,num2);
    return 0;
}

void ProcessArrays(int one[],int lengthOne,int two[],int lengthTwo){
    int newLen;
    if(lengthOne<lengthTwo){
        newLen = lengthOne;
    }else{
        newLen = lengthTwo;
    }
    
    int* ptr = (int*)malloc(newLen*sizeof(int));
    int isIntersect = 0;
    for (int i = 0; i < lengthOne; i++)
    {
        int isAlreadyIn = 0;
        for (int j = 0; j < isIntersect; j++)
        {
            if(one[i]==ptr[j]){
                isAlreadyIn = 1;
                break;
            }
        }
        if (isAlreadyIn==1)
        {
            continue;
        }
        int oneNumIntersect = 0;
        for (int j = 0; j < lengthTwo; j++)
        {
            if(one[i]==two[j]){
                ptr[isIntersect] = one[i];
                oneNumIntersect = 1;
            }
        }
        if(oneNumIntersect==1){
            isIntersect++;
        }
    }
    for (int i = 0; i < isIntersect; i++)
    {
        printf("%d\n",ptr[i]);
    }
    if(isIntersect==0){
        printf("None");
    }
}