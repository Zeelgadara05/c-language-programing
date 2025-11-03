#include<stdio.h>
void InputAmount(int *n,float *amount_1,float *amount_2)
{
    printf("Enter the number of months:");
    scanf("%d",n);
    printf("Enter the savings in 1st month:");
    scanf("%f",amount_1);
    printf("Enter the savings of 2nd month:");
    scanf("%f",amount_2);
}
void Savings(int n,float amount_1,float amount_2)
{
    float t,sum=0;
    printf("Savings of 1 Month:%f",amount_1);
    printf("\nSavings of 2 month:%f",amount_2);
    for(int i=3;i<=n;i++)
    {
        sum = amount_1 + amount_2;
        printf("\nSavings for %d Month:%f",i,sum);
        amount_1 = amount_2;
        amount_2 = sum;
        sum=0;
    }
}
void main()
{
    int n;
    float amount_1,amount_2;
    InputAmount(&n,&amount_1,&amount_2);
    Savings(n,amount_1,amount_2);
}
