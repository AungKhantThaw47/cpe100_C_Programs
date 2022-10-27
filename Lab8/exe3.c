#include<stdio.h>

int celsius(int fahrenheitPara){
    return ((5*(fahrenheitPara-32))/9);
}

int fahrenheit(int celsiusPara){
    return ((9*celsiusPara)/5)+32;
}

int main(){
    printf("++++++++++++++++++++++++\n");
    printf("+ Celsius + Fahrenheit +\n");
    printf("++++++++++++++++++++++++\n");
    for (int i = 0; i <= 100; i++)
    {
        printf("+ %7.d + %10.d +\n",i,fahrenheit(i));
    }
    printf("++++++++++++++++++++++++\n\n");
    printf("++++++++++++++++++++++++\n");
    printf("+ Fahrenheit + Celsius +\n");
    printf("++++++++++++++++++++++++\n");
    for (int i = 32; i <= 212; i++)
    {
        printf("+ %10.d + %7.d +\n",i,celsius(i));
    }
    printf("++++++++++++++++++++++++\n\n");
    return 0;
}