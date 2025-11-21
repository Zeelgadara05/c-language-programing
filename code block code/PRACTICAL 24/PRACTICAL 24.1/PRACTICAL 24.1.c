#include<stdio.h>
#include<string.h>

void main()
{
    char c[50],p[50];
    int l=0,i,a;

    printf("enter your name:");
    scanf("%s",c);

    for(i=0;c[i]!='\0';i++)
    {
        l++;
    }
    printf("length of your name is: %d\n",l);

    for(i=0;c[i]!='\0';i++)
    {
        a=l-i-1;
        p[a]=c[i];
    }
    printf("revers of your name is:%s",p);

}
