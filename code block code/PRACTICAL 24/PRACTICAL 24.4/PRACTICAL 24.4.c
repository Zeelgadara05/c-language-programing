#include<stdio.h>
#include<string.h>

void main()
{
    char a[50],b[50];
    int i;

    printf("enter your name:");
    scanf("%s",a);

    for(i=0;a[i]!='\0';i++)
    {
        b[i]=a[i];
    }
    printf("second name is: %s",b);
}
