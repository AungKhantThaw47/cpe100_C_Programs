#include<stdio.h>
int isPresent(int arr[],int len,int val,int *fequency,int *spec);
int main(){
    int length;
    scanf("%d",&length);
    int special[length];
    int feq[length];
    int counter = 0;
    for (int i = 0; i < length; i++)
    {
        int temp;
        scanf("%d",&temp);
        if(!isPresent(special,counter,temp,feq,special)){
            counter++;
        }
        
    }
    for (int i = 0; i < counter; i++)
    {
        printf("%d %d\n",special[i],feq[i]);
    }
    return 0;
}

int isPresent(int arr[],int len,int val,int *fequency,int *spec){
    if (len==0)
    {
        spec[0] = val;
        fequency[0] = 1;
        return 0;
    }
    for (int i = 0; i < len; i++)
    {
        if(val==arr[i])
        {
            fequency[i] = fequency[i]+1;
            return 1;
        }
    }
    int largest = 1;
    for (int i = 0; i < len; i++)
    {
        if(val<arr[i])
        {
            largest = 0;
            for (int j = len; j > i; j--)
            {
                spec[j] = spec[j-1];
                fequency[j] = fequency[j-1];
            }
            spec[i] = val;
            fequency[i] = 1;
            break;
        }
    }
    if(largest==1){
        spec[len] = val;
        fequency[len] = 1;
    }
    return 0;
}