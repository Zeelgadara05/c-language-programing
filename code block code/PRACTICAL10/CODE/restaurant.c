#include<stdio.h>
int main()
{
    int choise;
    int total = 0;
    printf("Welcome to the foodies restaurant.\n");
    printf("--------Menu--------\n");
    printf("1. Burger - ₹150\n");
    printf("2. Pizza - ₹200\n");
    printf("3. Pasta - ₹120\n");
    printf("4. Sandwich - ₹100\n");
    printf("5. French Fries - ₹80\n");
    printf("Enter 0 to end the order.\n");

    while(1)
    {
        printf("Enter the number:");
        scanf("%d",&choise);

        switch(choise)
        {
            case 1:
            total += 150;
            printf("Your subtotal is: %d\n", total);
            break;

            case 2:
            total += 200;
            printf("Your subtotal is: %d\n", total);
            break;

            case 3:
            total += 120;
            printf("Your subtotal is: %d\n", total);
            break;

            case 4:
            total += 100;
            printf("Your subtotal is: %d\n", total);
            break;

            case 5:
            total += 80;
            printf("Your subtotal is: %d\n", total);
            break;

            case 0:
            printf("Thank you for your order.\n");
            printf("The total amount to be paid is: %d\n",total);
            return 0;

            default:
            printf("Invalid choise.");
        }
    }
}
