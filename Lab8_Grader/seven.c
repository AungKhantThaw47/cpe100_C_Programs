#include<stdio.h>
#include<stdlib.h>

#define EVEN 0
#define ODD 1

int CharToInt(char inChar);
int Recur(int arr[],int length,int EorO);
int isPrime(int checkNum);
int isEven(int checkNum);

int main(){
    char arr[9];
    int c=0;
    scanf("%s",arr);
    while (arr[c] != '\0')
        c++;
    int numArr[c];
    for (int i = 0; i < c; i++)
    {
        numArr[i] = CharToInt(arr[i]);
    }
    if(Recur(numArr,c,EVEN)==1){
        printf("True");
        return 0;
    }
    printf("False");
    return 0;
}

int CharToInt(char inChar){
    return (int)inChar - 48;
}

int Recur(int arr[],int length,int EorO){
    int theNum = arr[0];
    int newLen = length-1;
    int* ptr = (int*)malloc(newLen*sizeof(int));
    if ((EorO==EVEN)&&(isEven(theNum)==1))
    {
        if(length==1){
            return 1;
        }
        for (int i = 1; i < length; i++)
        {
            ptr[i-1] = arr[i];
        }
        return Recur(ptr,newLen,ODD);
    }
    else if ((EorO==ODD)&&(isPrime(theNum)==1))
    {
        if(length==1){
            return 1;
        }
        for (int i = 1; i < length; i++)
        {
            ptr[i-1] = arr[i];
        }
        return Recur(ptr,newLen,EVEN);
    }
    return 0;
}

int isPrime(int checkNum){
    if ((checkNum==2)||(checkNum==3)||(checkNum==5)||(checkNum==7))
    {
        return 1;
    }
    return 0;
}

int isEven(int checkNum){
    if ((checkNum==0)||(checkNum==2)||(checkNum==4)||(checkNum==6)||(checkNum==8))
    {
        return 1;
    }
    return 0;
}