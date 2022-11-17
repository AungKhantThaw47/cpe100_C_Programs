#include<stdio.h>
#include<stdlib.h>

void Recur(int step,int final,int* arr){
    // printf("Step: %d :: Final: %d\n",step,final);
    if(step>final){
        return;
    }
    int* newptr = (int*)malloc(final*sizeof(int));
    newptr[0] = 1;
    newptr[step-1] = 1;
    for (int i = 1; i < step-1; i++)
    {
        // printf("Point i: %d\n",i);
        newptr[i] = arr[i-1]+arr[i];
    }
    for (int i = 0; i < step; i++)
    {
        printf("%d ",newptr[i]);
    }
    printf("\n");
    Recur(step+1,final,newptr);
}

int main(){
    int num;
    scanf("%d",&num);
    int* ptr = (int*)malloc(num*sizeof(int));
    for (int i = 0; i < num; i++)
    {
        ptr[i] = 0;
    }
    Recur(1,num,ptr);
    return 0;
}