#include<stdio.h>

struct Score
{
    int midterm;
    int finalterm;
    int workscore;
    char name[100];
    int finalScore;
    char grade;
    void (*ComputeFinal)(struct Score *);
};

void calculateFinalScore(struct Score *self){
    self->finalScore = self->midterm+self->finalterm+self->workscore;
}

int main()
{
    int len;
    scanf("%d",&len);
    struct Score students[len];
    for (int i = 0; i < len; i++)
    {
        scanf("%d %d %d %s",&students[i].midterm,&students[i].finalterm,&students[i].workscore,students[i].name);
        students[i].ComputeFinal = calculateFinalScore;
        students[i].ComputeFinal(&students[i]);
        printf("%d %d %d %s %d",students[i].midterm,students[i].finalterm,students[i].workscore,students[i].name,students[i].finalScore);
    }
    
    return 0;
}