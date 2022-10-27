#include <stdio.h>

const float gravity = 10.0;
const float initial = 0.0;

float finalVelocity(float InSecond){
    return initial + (gravity * InSecond);
}

float height(float InSecond){
    return ((initial + finalVelocity(InSecond))/2)*InSecond;
}

int main()
{
    float InTime;
    printf("Enter time (sec): ");
    scanf("%f",&InTime);
    printf("Height: %f",height(InTime));
    return 1;
}