#include <stdio.h>
void hailstone(int num){
    if (num==1){
        printf("%d\n",num);
    }
    else if(num%2==0){
        num/=2;
        printf("%d\n",num);
        
            hailstone(num);
        
    }
    else if(num%2!=0){
        num=num*3+1;
        printf("%d\n",num);
        hailstone(num);
    }
}
int main(void){
    int user_input;
    scanf("%d",&user_input);
    hailstone(user_input);
}