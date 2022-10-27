#include<stdio.h>

int main(){
    int length;
    scanf("%d",&length);
    int arr[length];
    int min = 1000;
    int secMin = 1000;
    int index = 0;
    int secIndex = 0;
    for (int i = 0; i < length; i++)
    {
        scanf("%d",&arr[i]);
        // printf("Before Min %d Sec Min %d\n",min,secMin);
        if(arr[i]<min)
        {
            secMin = min;
            min = arr[i];
            secIndex = index;
            index = i;
        }
        else if (arr[i]==min)
        {
            continue;
        }
        else if (arr[i]<secMin)
        {
            secMin = arr[i];
            secIndex = i;
        }
        // printf("After Min %d Sec Min %d\n",min,secMin);
    }
    printf("%d\n%d",secMin,secIndex);
    return 0;
}