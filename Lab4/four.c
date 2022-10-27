#include<stdio.h>

int main(){
    int side1,side2,side3;
    printf("Input: ");
    scanf("%d %d %d",&side1,&side2,&side3);
    if(side1>side2&&side1>side3&&side1<(side2+side3)) {
        printf("Yes");
    } else if (side2>side1&&side2>side3&&side2<(side1+side3)) {
        printf("Yes");
    } else if (side3>side2&&side3>side1&&side3<(side1+side2)) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 1;
}