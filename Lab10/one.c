#include<stdio.h>
#include<stdlib.h>

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
    if (self->finalScore<=100&&self->finalScore>=80){
        self->grade = 'A';
    } else if (self->finalScore<=79&&self->finalScore>=70){
        self->grade = 'B';
    } else if (self->finalScore<=69&&self->finalScore>=60){
        self->grade = 'C';
    } else if (self->finalScore<=59&&self->finalScore>=50){
        self->grade = 'D';
    }else{
        self->grade = 'F';
    }
}

int CompareFunction(const void * a, const void * b) {
    if(((struct Score*)a)->finalScore >= ((struct Score*)b)->finalScore)
        return 1;
    return -1;
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
    }
    qsort(students,len,sizeof(struct Score),CompareFunction);
    for (int i = len-1; i >=0; i--)
    {
        printf("%s %d %c\n",students[i].name,students[i].finalScore,students[i].grade);
    }
    return 0;
}