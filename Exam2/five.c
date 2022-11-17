#include<stdio.h>

void Turn(int rocks,int turn){
    if(rocks<=3){
        if(turn==0){
            printf("True");
        }
        else
        {
            printf("False");
        }
    }else
    {
        if(turn==0){
            Turn(rocks-1,1);
        }
        else
        {
            Turn(rocks-1,0);
        }
        
    }
}

int main(){
    int num;
    scanf("%d",&num);
    Turn(num,0);
    return 0;
}