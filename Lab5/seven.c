#include<stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int baseArr[num];
    int tempArr[num];
    for (int i = 0; i < num; i++)
    {
        baseArr[i] = 0;
        tempArr[i] = 0;
    }
    
    for (int i = 0; i < num; i++)
    {
        for (int j = num-i; j > 0; j--)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            if (i==0)
            {
                tempArr[k]=1;
                printf("%d",1);
            }else
            {
                if(k!=0&&k!=i){
                    int temp = baseArr[k-1]+baseArr[k];
                    printf("%d ",temp);
                    tempArr[k]=temp;
                }else
                {
                    printf("%d ",1);
                    tempArr[k]=1;
                }
            }
        }
        for (int i = 0; i < num; i++)
        {
            baseArr[i]=tempArr[i];
        }
        printf("\n");
    }
    return 1;
}