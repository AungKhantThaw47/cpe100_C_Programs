#include<stdio.h>

int main(){
    int LengthOne;
    int LengthTwo;
    scanf("%d",&LengthOne);
    int ArrOne[LengthOne];
    for (int i = 0; i < LengthOne; i++)
    {
        scanf("%d",&ArrOne[i]);
    }
    scanf("%d",&LengthTwo);
    if (LengthTwo>LengthOne)
    {
        printf("False");
        return 0;
    }
    int ArrTwo[LengthTwo];
    for (int i = 0; i < LengthTwo; i++)
    {
        scanf("%d",&ArrTwo[i]);
    }
    int IsSub = 1;
    for (int i = 0; i < LengthTwo; i++)
    {
        int found = 0;
        for (int j = 0; j < LengthOne; j++)
        {
            if(ArrTwo[i]==ArrOne[j])
            {
                found = 1;
                break;
            }
        }
        if(found==0){
            IsSub = 0;
            break;
        }
    }
    if(IsSub==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
    return 0;
}