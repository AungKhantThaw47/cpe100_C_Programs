#include<stdio.h>
#include<stdlib.h>

int main(){
    int* pointer;
    int n = 10;
    pointer = (int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        pointer[i] = (i*i);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",pointer[i]);
    }
    printf("\n\n");
    n = 5;
    pointer = (int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        pointer[i] = (i+i);
    }
    for (int i = 0; i <= n; i++)
    {
        printf("%d\n",pointer[i]);
    }
    return 0;
}