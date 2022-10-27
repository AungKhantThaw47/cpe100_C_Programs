#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int GCD(int one,int two);

int main(){
    int num1,num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    int gcd = GCD(num1,num2);
    if(gcd==-1){
        printf("ERROR");
        return 0;
    }
    int multi = num1*num2;
    // printf("GCD %d\n",gcd);
    printf("%d",(multi/gcd));
    return 0;
}

int GCD(int one,int two){
    int quotient,remainder;
    int dividend , diviser;
    if(one>two){
        dividend = one;
        diviser = two;
    }else{
        dividend = two;
        diviser = one;
    }
    if(diviser==0){
        return -1;
    }
    quotient = dividend/diviser;
    remainder = dividend % diviser;
    if(remainder!=0){
        return GCD(diviser,remainder);
    }else{
        return diviser;
    }
    
}