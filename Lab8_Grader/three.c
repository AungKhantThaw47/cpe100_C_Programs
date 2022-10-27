#include<stdio.h>
#include<math.h>

int IsPower(int num,int power);

int main(){
    int inNum;
    scanf("%d",&inNum);
    if (inNum<0)
    {
        inNum = (-1)*inNum;
    }
    
    if(IsPower(inNum,2)==1||(inNum==1)){
        printf("True");
    }else{
        printf("False");
    }
    printf("\n");
    if(IsPower(inNum,3)==1||(inNum==1)){
        printf("True");
    }else{
        printf("False");
    }
    printf("\n");
    if(IsPower(inNum,4)==1||(inNum==1)){
        printf("True");
    }else{
        printf("False");
    }
    return 0;
}

int IsPower(int num,int power){
    // printf("Power: %d : InNumber: %d\n",power,num);
    if (num==power)
    {
        return 1;
    }
    else if (num>power)
    {
        if (num%power==0)
        {
            return IsPower(num/power,power);
        }
        else
        {
            return 0;
        }
    }
    else if(num<power)
    {
        return 0;
    }
    return 0;
}

// int IsPowerAlter(int num,int base,int power){
//     if(pow((double)base,(double)power)==num){

//     }
// }