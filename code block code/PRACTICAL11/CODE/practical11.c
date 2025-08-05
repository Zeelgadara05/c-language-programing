#include<stdio.h>
void main()
{
    int marks;
    printf("Enter you marks:");
    scanf("%d",&marks);
    if(marks>=90 & marks<=100)
    {
        printf("You have score A grade.\n");
    }
    else if(marks<90 & marks>=80)
    {
        printf("You have scored B grade.\n");
    }
    else if(marks<80 & marks>=70)
    {
        printf("You have scored C grade.\n");
    }
    else if(marks<70 & marks>=60)
    {
        printf("You have scored D grade.\n");
    }
    else if(marks<60 & marks>=0)
    {
        printf("You have scored F grade.");
    }
    else
    {
        printf("Enterd marks is invalid");
    }
}
