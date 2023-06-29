#include <stdio.h>

int main(){

    const double PI = 3.14169;
    double radius;
    double circumference;

    printf("Enter radious of a circle: ");
    scanf("%lf", &radius);

    circumference = 2*PI*radius;

    printf("circumference: %lf", circumference);
    
    return 0;
}