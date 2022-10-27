#include<stdio.h>

int Reverse(char *ptr){
    char *lastPtr;
    lastPtr = ptr;
    int count = 0;
    while (*lastPtr!='\0')
    {
        count++;
        ++lastPtr;
    }
    lastPtr--;
    while (ptr<=lastPtr)
    {
        char temp = *ptr;
        *ptr = *lastPtr;
        *lastPtr = temp;
        ++ptr;
        --lastPtr;
    }
    return count;
}

int main(){
    char arr[1000];
    scanf("%s",arr);
    int len = Reverse(arr);
    for (int i = 0; i < len; i++)
    {
        printf("%c",arr[i]);
    }
    return 0;
}