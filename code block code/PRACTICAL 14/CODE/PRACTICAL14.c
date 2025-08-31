#include<stdio.h>
void main()
{
    float withdraw,balance = 5000;
    printf("Current Balance:%.2f\n",balance);
    printf("Enter the withdrawal amount:");
    scanf("%f",&withdraw);
    if(balance > withdraw)
    {
        balance = balance - withdraw;
        printf("Balance after withdrawal:%.2f\n",balance);
    }
    else
    {
        printf("Withdrawal amount is more then your current bank balance.\n");
    }
    printf("The program is done by ZEEL GADARA_25CE027");
}
