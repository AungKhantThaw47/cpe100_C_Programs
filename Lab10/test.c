#include<stdio.h>
#include<stdlib.h>

int CompareFunction(const void * a, const void * b) {
    printf("%d\n",*(int*)a);
    printf("%d\n\n",*(int*)b);
    return ( *(int*)a - *(int*)b );
}

int main(){
    int arr[]={3,1,6,4,10};
    qsort(arr,5,sizeof(int),CompareFunction);
    // sort(arr,arr+5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d",arr[i]);
    }
    
    return 0;
}