#include<stdio.h>

int Fibo(int t1,int t2);

int main(){
    int t1 = 1;
    int t2 = 1;
    int term;
    scanf("%d",&term);
    if (term<=2)
    {
        printf("1");
        return 0;
    }
    else
    {
        for (int i = 3; i <= term; i++)
        {
            int temp = Fibo(t1,t2);
            t1 = t2;
            t2 = temp;
        }
    }
    printf("%d",t2);
    return 0;
}

int Fibo(int t1,int t2){
    return t1+t2;
}