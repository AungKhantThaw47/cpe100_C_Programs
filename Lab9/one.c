#include<stdio.h>

int Len(char *ptr){
    int count = 0;
    while (*ptr!='\0')
    {
        count++;
        ++ptr;
    }
    return count;
}

int main(){
    char arr[1000];
    scanf("%s",arr);
    printf("%d",Len(arr));
    return 0;
}

