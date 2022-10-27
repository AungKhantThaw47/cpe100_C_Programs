#include<stdio.h>
#include<stdlib.h>

int IsPossible(char charArr[],int length,int min,int max,int start);

int main(){
    char arr[1000];
    char *ptr = arr;
    int minJump,maxJump;
    scanf("%s",arr);
    scanf("%d",&minJump);
    scanf("%d",&maxJump);
    int count = 0;
    while (*ptr!='\0')
    {
        count++;
        ++ptr;
    }
    if(IsPossible(arr,count,minJump,maxJump,0)==1){
        printf("True");
        return 0;
    }
    printf("False");
    return 0;
}

int IsPossible(char charArr[],int length,int min,int max,int start){
    int startLocation;
    if (start+min>=length)
    {
        return 0;
    }
    if(start+max<length){
        startLocation = start+max;
    }else{
        startLocation = length-1;
    }
    int returnWaitLen = (startLocation+start+min+1);
    int returnCounter = 0;
    int* ptr = (int*)malloc((startLocation+start+min+1)*sizeof(int));
    for (int i = startLocation ; i >= start+min && i>start; i--)
    {
        if (charArr[i]=='0')
        {
            if (i==(length-1))
            {
                return 1;
            }
            ptr[returnCounter] = IsPossible(charArr,length,min,max,i);
            returnCounter++;
        }
    }
    for (int i = 0; i < returnCounter; i++)
    {
        if(ptr[i]==1){
            return 1;
        }
    }
    return 0;
}