#include<stdio.h>

int Turn(int rocks,int turn){
    if(rocks<=3){
        if(turn==0){
            return 1;
        }
        else
        {
            return 0;
        }
    }else
    {
        if(turn==0){
            return Turn(rocks-1,1)||Turn(rocks-2,1)||Turn(rocks-3,1);
        }
        else
        {
            return Turn(rocks-1,0)||Turn(rocks-2,0)||Turn(rocks-3,0);
        }
    }
}

int main(){
    int num;
    scanf("%d",&num);
    if(Turn(num,0)==1){
        printf("True");
    }else
    {
        printf("False");
    }
    
    return 0;
}