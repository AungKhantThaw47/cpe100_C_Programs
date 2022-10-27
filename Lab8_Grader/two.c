#include<stdio.h>

void Recur(int num);

int main(){
    int inNum;
    scanf("%d",&inNum);
    Recur(inNum);
    return 0;
}

void Recur(int num){
    printf("%d\n",num);
    if(num==1){
        return;
    }
    if(num%2==1){
        int newNum = ((3*num)+1);
        Recur(newNum);
    }else
    {
        int newNum = num/2;
        Recur(newNum);
    }
}