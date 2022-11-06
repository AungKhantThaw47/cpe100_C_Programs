#include<stdio.h>

struct Salary
{
    char name[100];
    int salary;
    char workDays[100];
    float (*totalDays) (struct Salary *w);
    float (*absentDays) (struct Salary *);
    float (*calculteTotalSalary)(struct Salary *);
};

float calculateTotalDays(struct Salary *w){
    int temp=0;
    for (size_t i = 0; i < 100; i++)
    {
        if(w->workDays[i]!='\0'){
            temp++;
        }
        else
        {
            break;
        }
        
    }
    return temp;
}

float calculateTotalAbsentDays(struct Salary *w){
    int temp=0;
    for (size_t i = 0; i < 100; i++)
    {
        if(w->workDays[i]!='\0'){
            if(w->workDays[i]=='N')
            {
                temp++;
            }
        }
        else
        {
            break;
        }
        
    }
    return temp;
}

float calculateTotal(struct Salary *w){
    // printf("%f\n",w->absentDays(w));
    // printf("%f\n",w->totalDays(w));
    return ( w->salary * ( 1.0 - ( w->absentDays(w) / w->totalDays(w) ) ) );
}  

int main(){
    int len;
    scanf("%d",&len);
    struct Salary workers[len];
    for (int i = 0; i < len; i++)
    {
        scanf("%s %d %s",workers[i].name,&workers[i].salary,workers[i].workDays);
        workers[i].absentDays = calculateTotalAbsentDays;
        workers[i].totalDays = calculateTotalDays;
        workers[i].calculteTotalSalary = calculateTotal;
        printf("%s %d\n",workers[i].name,(int)workers[i].calculteTotalSalary(&workers[i]));
    }
    return 0;
}