#include<stdio.h>
int isPresent(int arr[],int len,int val,int *spec,int *count);
int main(){
    int length;
    scanf("%d",&length);
    int special[length];
    int counter = 0;
    for (int i = 0; i < length; i++)
    {
        int temp;
        scanf("%d",&temp);
        if(!isPresent(special,counter,temp,special,&counter)){
            special[counter] = temp;
            counter++;
        }
    }
    for (int i = 0; i < counter; i++)
    {
        printf("%d\n",special[i]);
    }
    return 0;
}

int isPresent(int arr[],int len,int val,int *spec,int *count){
    for (int i = 0; i < len; i++)
    {
        if(val==arr[i])
        {
            for (int j = 0; j < i; j++)
            {
                spec[j] = arr[j];
            }
            for (int j = 0; j < (len-i); j++)
            {
                spec[i+j] = arr[i+j+1];
            }
            *count = *count - 1;
            return 1;
        }
    }
    return 0;
}