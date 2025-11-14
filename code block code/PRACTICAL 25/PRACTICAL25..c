#include<stdio.h>
#include<string.h>

void displaybooks();
int gettotalbooks(int);
void borrowbook();
void claculatefine();

void main()
{
    int n,y,z;
    char x;
    printf("welcome to pheonix library\n");
    x:printf("Enter 1:Display books\n");
    printf("Enter 2:Display total number of books\n");
    printf("Enter 3:Borrow a book\n");
    printf("Enter 4;Know your fine\n");
    printf("Enter 5:To leave the library\n");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        displaybooks();
        goto x;

    case 2:
        y=3;
        z=gettotalbooks(y);
        printf("%d\n",z);
        goto x;
    case 3:
        borrowbook();
        goto x;
    case 4:
        claculatefine();
        goto x;
    case 5:
        break;
    default:
        printf("Please try again\n");
        goto x;


    }


}
void displaybooks()
{
    char b1[]="Let Us C";
    char b2[]="My Life";
    char b3[]="Me";
    printf("%s\n",b1);
    printf("%s\n",b2);
    printf("%s\n",b3);

}
int gettotalbooks(int p)
{
    int a;
    a=3;
    return a;
}
void borrowbook()
{
    char b[50];
    char b1[]="Let Us C";
    char b2[]="My Life";
    char b3[]="Me";
    int v,r,t;
    printf("Please enter book title");
    scanf("%s",&b);
    v=strcmp(b,b3);
    r=strcmp(b,b2);
    t=strcmp(b,b1);

    if(v==0||t==0||r==0)
    {
        printf("\nThe book is issued");

    }
    else
    {
        printf("The book title is invalid");
    }
}
void claculatefine()
{
    int f=5,d;
    printf("Please entered the delayed days:");
    scanf("%d",&d);
    printf("Your fine is %d Rupees.\n",f*d);
}
