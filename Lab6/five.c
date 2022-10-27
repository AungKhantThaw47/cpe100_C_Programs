#include<stdio.h>
#include<string.h>

int main(){
    int totaldays = 30;
    char days[7][20] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    char* startDay = "Thursday";
    int counter = 0;
    printf(" S  M  T  W  T  F  S\n");
    for (int i = 0; i < 7; i++)
    {
        if(strcmp(startDay,days[i])==0)
        {
            printf("%2d ",1);
            counter++;
            break;
        }
        else
        {
            printf("   ");
            counter++;
        }
    }
    for (int i = 2; i <= totaldays; i++)
    {
        if (counter%7==0)
        {
            printf("\n");
        }
        printf("%2d ",i);
        counter++;
    }
    
    return 1;
}