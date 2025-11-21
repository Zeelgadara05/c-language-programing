#include<stdio.h>
#include<string.h>

void main()
{
    char a[50];
    int i;

    printf("enter your name:");
    gets(a);

    for(i=0;a[i]!='\0';i++)
    {
        if(a[0]>='a'&&a[0]<='z')
        {
            a[0]-=32;
        }
    }
    printf("Capitalize: %s",a);
}
