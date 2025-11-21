#include<stdio.h>
#include<string.h>

void main()
{
    char a[50];
    int i;

    printf("enter your name:");
    scanf("%s",a);

    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a'&&a[i]<='z')
        {
            a[i]-=32;
        }
    }
    printf("upper case: %s",a);
}
