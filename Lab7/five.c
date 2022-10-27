#include<stdio.h>
#include<stdlib.h>

int CompareFunction (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(){
    int lenOne;
    int lenTwo;
    scanf("%d",&lenOne);
    int arrOne[lenOne];
    for (int i = 0; i < lenOne; i++)
    {
        scanf("%d",&arrOne[i]);
    }
    scanf("%d",&lenTwo);
    if(lenOne!=lenTwo){
        printf("False");
        return 0;
    }
    int arrTwo[lenTwo];
    for (int i = 0; i < lenTwo; i++)
    {
        scanf("%d",&arrTwo[i]);
    }
    qsort(arrOne, lenOne, sizeof(int), CompareFunction);
    qsort(arrTwo, lenTwo, sizeof(int), CompareFunction);
    for (int i = 0; i < lenOne; i++)
    {
        if(arrOne[i]!=arrTwo[i])
        {
            printf("False");
            return 0;
        }
    }
    printf("True");
    return 0;
}