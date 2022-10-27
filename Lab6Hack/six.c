#include<stdio.h>

struct Store
{
    /* data */
    int first,second,value;
};


int main(){
    int length;
    scanf("%d",&length);
    int arr[length];
    int storeLen = ((length-1)*(length))/2;
    struct Store store[storeLen];
    int counter = 0;
    scanf("%d",&arr[0]);
    for (int i = 1; i < length; i++)
    {
        scanf("%d",&arr[i]);
        for (int j = i; j > 0; j--)
        {
            store[counter].first = arr[j-1];
            store[counter].second = arr[i];
            store[counter].value = store[counter].first + store[counter].second;
            counter++;
        }
    }
    int min = 2000;
    int thefirst = -1;
    int thesecond = -1;
    for (int i = 0; i < counter; i++)
    {
        int temp = store[i].value;
        if (temp<0)
        {
            temp = temp*(-1);
        }
        
        if (min>temp)
        {
            thefirst = store[i].first;
            thesecond = store[i].second;
            min = temp;
        }
        
    }
    printf("%d\n%d",thefirst,thesecond);
    return 0;
}