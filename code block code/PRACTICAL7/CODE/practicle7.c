#include<stdio.h>
void main()
{
    int age;
    const int price=200;
    printf("please enter your age: ",age);
    scanf("%d",&age);
    if(age<12)
    {
        printf("You dont need to buy a ticket as you are a child.");
    }
    else
    {
        printf("\nAs you are adult you need to buy a ticket.");
        int npeople,totalprice;
        printf("\nEnter the number of adult you are: ", npeople);
        scanf("%d" , &npeople);
        totalprice=price*npeople;
        printf("\nYou need to pay ruppes: %d", totalprice);
    }
    printf("\nThe programm is devloped by: ZEEL GADARA_(25TCEKY2)");
}
