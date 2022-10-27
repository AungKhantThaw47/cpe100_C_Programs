#include<stdio.h>

int main(){
    int len;
    scanf("%d",&len);
    int num[len];
    int min = 1000;
    int max = -1000;
    for (int i = 0; i < len; i++)
    {
        int temp;
        scanf("%d",&temp);
        if(temp>max){
            max = temp;
        }
        if(temp<min){
            min = temp;
        }
    }
    printf("%d\n",max);
    printf("%d",min);
    return 0;
}