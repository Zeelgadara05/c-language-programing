#include<stdio.h>
#include<math.h>
void inputside(float *a,float *b, float*c)
{
    printf("Side 1:");
    x:scanf("%f",a);
    if(*a<0)
    {
        printf("input the lenght in positive");
        goto x;
    }
    printf("Side 2:");
    y:scanf("%f",b);
    if(*b<0)
    {
        printf("input the lenght in positive");
        goto y;
    }
    printf("Side 3:");
    z:scanf("%f",c);
    if(*c<0)
    {
        printf("input the lenght in positive");
        goto z;
    }
}
void validtri(float a,float b,float c)
{
    if(a+b>c && b+c>a && a+c>b)
        printf("The triangle is valid");
    else
        printf("Invaid triangle");
}
void area(float a,float b,float c)
{
    float s,q,Area;
    s=(a+b+c)/2.0;

    q= s*(s-a)*(s-b)*(s-c);
    Area = sqrt(q);
    printf("\n%f",Area);
}
void main()
{
    float a,b,c;
    inputside(&a,&b,&c);
    validtri(a,b,c);
    area(a,b,c);
}
