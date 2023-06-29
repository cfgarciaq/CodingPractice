#include <stdio.h>

int main(){

    const double PI = 3.14169;
    double radius;
    double circumference;
    double area;

    printf("Enter radious of a circle: ");
    scanf("%lf", &radius);

    circumference = 2*PI*radius;

    area = PI*radius*radius;

    printf("circumference: %lf", circumference);
    printf("area: %lf", area);

    

    return 0;
}