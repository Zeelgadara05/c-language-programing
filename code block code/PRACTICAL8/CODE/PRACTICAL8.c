#include<stdio.h>
void main()
{
    int age ;
    printf("Please enter your age: ");
    scanf("%d", &age);
    if(age > 0)
    {
        if(age < 18)
        {
            printf("You are not eligible to open an account.");
        }
        else if(age>=18 & age<59)
        {
            printf("You are eligible to open an account for regular savings.");
        }
        else if (age >= 60)
        {
            printf("You are eligible to open a Senior citizen account.");
        }
    }
    else
    {
        printf("The age you have enter us in invalide formate");
    }
}
