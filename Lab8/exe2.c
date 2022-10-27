#include<stdio.h>
#include<math.h>

double Hypotenuse(double side1,double side2){
    return sqrt(pow(side1,2)+pow(side2,2));
}

int main(){
    printf("%f\n",Hypotenuse(3.0,4.0));
    printf("%f\n",Hypotenuse(5.0,12.0));
    printf("%f\n",Hypotenuse(8.0,15.0));
    return 0;
}