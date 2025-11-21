#include<stdio.h>
#include<stdlib.h>

union book_title
{
    char title[50];

};
union book_authors
{
    char author[50];
};
union book_price
{
    float price;
};

void main()
{
    union book_title alltitle[5];
    union book_authors allauthors[5];
    union book_price allprice[5];
    int i;

    for(i=0;i<5;i++)
    {
        printf("\nPlease enter the title of the book:");
        scanf("%s",alltitle[i].title);
        printf("%s",alltitle[i].title);
        printf("\nPlease enter the author of the book:");
        scanf("%s",allauthors[i].author);
        printf("%s",allauthors[i].author);
        printf("\nEnter the price of the book:");
        scanf("%f",&allprice[i].price);
        printf("\n%f",allprice[i].price);
    }

}
