#include<stdio.h>
#include<string.h>

void main()
{
    char a[50],b[50],c[100];
    int i,j;

    printf("enter first name:");
    scanf("%s",a);
    printf("enter second name:");
    scanf("%s",b);

    for(i=0;a[i]!='\0';i++)
    {
        c[i]=a[i];
    }
    for(j=0;b[j]!='\0';j++)
    {
        c[i]=b[j];
        i++;
    }
    c[i]='\0';

    printf("Concatenate of two name is: %s",c);
}
