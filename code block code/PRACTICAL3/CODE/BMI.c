#include<stdio.h>
void main()
{
    float height,weight,hsquare,BMI;  // here hsquare is square of height
    printf("Enter your weight in kilogram: ");
    scanf("%f", &weight);
    printf("Enter your height in meter: ");
    scanf("%f", &height);
    hsquare=height*height;
    BMI=weight/hsquare;
    printf("Your BMI is: %f", BMI);
}
