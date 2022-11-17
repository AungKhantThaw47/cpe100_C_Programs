#include<stdio.h>

struct TimeF
{
    int hour,min,sec,totalSec;
};

void TotalSec(struct TimeF* t){
    t->totalSec = t->hour*3600 + t->min*60 + t->sec;
}

int main(){
    struct TimeF sleep,wake;
    scanf("%d:%d:%d",&sleep.hour,&sleep.min,&sleep.sec);
    scanf("%d:%d:%d",&wake.hour,&wake.min,&wake.sec);
    TotalSec(&sleep);
    TotalSec(&wake);
    int dif = wake.totalSec - sleep.totalSec;
    if(dif<0){
        dif = (86400-sleep.totalSec)+wake.totalSec;
    }
    if(dif>=25200&&dif<=36000){
        printf("True");
    }else
    {
        printf("False");
    }
    
    return 0;
}