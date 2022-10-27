#include<stdio.h>

void simpleSort(double num1,double num2,double num3,double num4);

int main(){
    simpleSort( 3.0 , 1.0 , 5.0 , 9.0 );
    return 0;
}

void simpleSort(double num1,double num2,double num3,double num4){
    int len = 4;
    double arr[] = {num1,num2,num3,num4};
    for (int i = 0; i < len-1; i++)
    {
        for (int j = i+1; j < len; j++)
        {
            if(arr[i]<arr[j]){
                double temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        
    }
    for (int i = 0; i < len; i++)
    {
        printf("%f\n",arr[i]);
    }
}