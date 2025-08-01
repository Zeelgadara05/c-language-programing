#include<stdio.h>
void main()
{
    float totalprice,totalamount,discount;
    printf("Enter the total price:");
    scanf("%f", &totalprice);
    if(totalprice<1000)
    {
        printf("You will not get any discount.");
        totalamount=totalprice;
        printf("\nThe total price to pay is: %.2f", totalamount);
    }
    else if(totalprice>=1000 & totalprice<5000)
    {
        discount=(totalprice*10)/100;
        printf("You will recive a discount of rupees: %.2f",discount);
        totalamount= totalprice - discount;
        printf("\nThe total amount to pay is: %.2f", totalamount);
    }
    else
    {
        discount=(totalprice*20)/100;
        printf("You would recive a discount of rupees: %.2f");
        totalamount = totalprice - discount;
        printf("\nThe total amount to pay is: %.2f", totalamount);
    }
}
